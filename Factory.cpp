#include <bits/stdc++.h>
#define NAME "Factory"
#define ll long long
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

ll n,t;
ll a[5000001];

bool OK(ll x){
   ll s = 0;
   for(int i=1;i<=n;++i){
      s+=x/a[i];
      if(s>=t) return false;
   }
   return true;
}

int main()
{
   ll x = 0;
   fi >> n >> t;
   for(int i=1;i<=n;++i) fi >> a[i];
   for(ll bi = 1e18; bi>=1; bi/=2){
      while(OK(bi+x)) x+=bi;
   }
   fo << x+1 << '\n';
   return 0;
}
