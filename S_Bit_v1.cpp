#include <bits/stdc++.h>
#define NAME "S_Bit"
using namespace std;

const int M = 1e9+7;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int a[1000001];

int main()
{
   int n,k;
   fi >> n >> k;
   a[0] = 2;
   for(int i=1;i<=n;++i){
      for(int j=1; j<=k && i-j>=0;++j){
         a[i] += a[i-j];
         a[i] %= M;
      }
   }
   fo << a[n];
   return 0;
}

