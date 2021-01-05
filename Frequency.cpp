#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,k;
ll t[2000006];
map<ll,ll> mem;
set<pair<ll,ll>> order;


void insert(ll x){
   order.erase({-mem[x],x});
   mem[x]++;
   order.insert({-mem[x],x});
}

void remove(ll x)
{
   order.erase({-mem[x],x});
   mem[x]--;
   order.insert({-mem[x],x});
}

ll show(){
   return order.begin()->second;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   cin >> n >> k;
   for(int i=1;i<=n;++i) cin >> t[i];
   for(int i=1;i<=k;++i){
      insert(t[i]);
   }
   cout << show() <<' ';
   for(int i=k+1;i<=n;++i){
      insert(t[i]);
      remove(t[i-k]);
      cout<<show()<<' ';
   }
   return 0;
}
