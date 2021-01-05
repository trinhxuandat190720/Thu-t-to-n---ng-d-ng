#include <bits/stdc++.h>
#define NAME "WordOrdering"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

map<char,int> mem;
vector<string> res;

bool cmp(string a, string b){
   for(int i=0;i<min(a.size(),b.size());++i){
      if(mem[a[i]] < mem[b[i]]) return true;
      if(mem[a[i]] > mem[b[i]]) return false;
   }
   return a.size()<b.size();
}

int main()
{
   string s,v; fi >> s;
   for(int i=0;i<v.size();++i){
      v[i] -= ('a'-'A');
   }
   s+=v;
   for(int i=0;i<s.size();++i){
      mem[s[i]] = i;
   }
   int q;
   fi >> q;
   while(q--){
      fi >> s;
      res.push_back(s);
   }
   sort(res.begin(),res.end(),cmp);
   for(auto i:res) fo<<i<<'\n';
   return 0;
}
