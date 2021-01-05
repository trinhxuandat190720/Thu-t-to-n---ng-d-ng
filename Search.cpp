#include <bits/stdc++.h>
#define NAME "Search"
#define ll int64_t
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

ll n;

bool OK(ll x){
   ll s = 0;
   for(ll i=1;i<=n;++i){
      s+=min(n,x/i);
      if(s>n*n/2) return false;
   }
   return true;
}


int main()
{
   fi >> n;
   ll res = 0;
   for(ll b = n*n; b>=1; b/=2){
      while(OK(b+res)) res+=b;
   }
   fo << res+1;
   return 0;
}
