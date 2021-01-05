#include <bits/stdc++.h>
#define NAME "Distance"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int n,k;
int a[5000001];

bool OK(int mid){
   int pos = a[1];
   int element = 1;
   for(int i=2 ; i<=n; ++i){
      if(a[i] - pos >= mid){
         pos = a[i];
         element++ ;
         if(element == k)
            return true;
      }
   }
   return false;
}

int binarySearch(){
   sort(a+1,a+n+1);
   int res = -1;
   int  left = 1, right = a[n];
   while(left < right){
      int mid = left + (right-left)/2;
      if(OK(mid)){
         res = max(mid,res);
         left = mid + 1;
      }
      else{
         right = mid;
      }
   }
   return res;
}
int main()
{
   fi >> n >> k;
   for(int i=1;i<=n;++i) fi >> a[i];
   fo << binarySearch() << '\n';
   return 0;
}
