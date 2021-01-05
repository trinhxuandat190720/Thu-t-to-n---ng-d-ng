#include <bits/stdc++.h>
#define NAME "Hotel"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int n;
vector<vector<int>> ar;

bool OK(int x){
   int s = 0;
   for(int i=0;i<ar.size();++i){
      if(ar[i][2]>x) continue;
      if(s>=ar[i][0]) return false;
      s = ar[i][1];
    }
   return true;
}


int main()
{
   fi  >> n;
   for(int i=1;i<=n;++i){
      int a,b;
      fi >> a >> b;
      ar.push_back({a,b,i});
   }
   sort(ar.begin(),ar.end());
   int k = 0;
   for(int b=n;b>=1;b/=2){
      while(b+k<=n && OK(b+k)) k+=b;
   }
   fo << (k==n?-1:k+1);
   return 0;
}
