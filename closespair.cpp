#include <bits/stdc++.h>
#define NAME "Closest_Pair"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int closestPair(vector<int>& a, vector<int>& b) {
    sort(a.begin(),a.end());
    int p,ans=1e9+7;
    for(int x:b){
        p=upper_bound(a.begin(),a.end(),x)-a.begin();
        if(p<a.size()) ans = min(ans,a[p]-x);
        p--;
        if(p>=0) ans = min(ans,x-a[p]);
    }
    return ans;
}

int main()
{
   int n;fi >> n;
   vector<int> a(n),b(n);
   for(auto &i:a) fi >> i;
   for(auto &i:b) fi >> i;
   fo << closestPair(a,b);
   return 0;
}
