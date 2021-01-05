#include <bits/stdc++.h>
#define NAME "The_U"
#define ll int64_t
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

ll n;
ll a[5000001];

bool OK(ll x){
   ll s = 0;
   for(int i=1;i<=n;++i){
      if(a[i]>0) s = min(s+a[i],x);
      else s+=a[i];
      if(s<0) return false;
   }
   return true;
}


int main(){
   fi >> n;
   for(int i=1;i<=n;++i) fi >> a[i];
   if(!OK(1e18)){
      fo << -1 << '\n' ;
      return 0;
   }
   ll res = -1;
   for(ll b = 1e18; b>=1; b/=2){
      while(!OK(res+b)) res+=b;
   }
   fo << res + 1 << '\n' ;
}
