#include <bits/stdc++.h>
#define NAME "Change_money"
#define ll long long
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int main()
{
   int n;
   fi >>  n;
   vector <ll> arr(n);
   for(auto &i:arr) fi >> i;
   sort(arr.begin(),arr.end());
   ll res = 0;
   for(int i=0;i<n;++i){
      if(res+1 < arr[i]){
        fo<<res+1<<'\n';
        return 0;
      }
      res+=arr[i];
   }
   fo<<res+1;
   return 0;
}
