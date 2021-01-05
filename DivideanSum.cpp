#include <bits/stdc++.h>
#define NAME "DivideanSum"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

vector<int> a;
set<int64_t> st;
int n,q;

void go(int l,int r){
   int64_t res=0,pos=-1;
   if(l==r) {st.insert(a[l]); return ;}
   for(int i=l;i<=r;++i){
      res+=a[i];
   }
   st.insert(res);
   int64_t m = (a[l]+a[r]) /2;
   for(int i=l;i<=r;++i){
      if(a[i]<=m){
         pos=i;
      }
      else break;
   }
   if(pos==-1 || pos == r) return;
   go(l,pos);
   go(pos+1,r);
}

void sol()
{
   a.clear();
   st.clear();
   fi >> n >> q;
   a.resize(n);
   for(auto &i:a) fi >> i;
   sort(a.begin(),a.end());
   go(0,n-1);
   while(q--){
      int x;
      fi >> x;
      if(st.find(x)!=st.end()){
         fo<<"Yes\n";
      }
      else fo<<"No\n";
   }
}
int main()
{
   int t;
   fi >> t;
   while(t--)
   {
      sol();
   }
   return 0;
}
