#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s, reulte="";
int n;
int len[128];

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   cin >> s;
   n = s.size();
   for(int i=0; i<n;++i){
      len[s[i]] ++ ;
   }
   char last = '#';
   for(int anmount = n ; anmount>=1; --anmount)
   {
      char take = ' ';
      bool fail = false;
      for(char c= 'A'; c<='Z'; ++c){
         if(2*len[c] == anmount+1) take = c;
         if(2*len[c] > anmount+1) fail = true;
      }
      if(take == last) fail = true;
      if(fail) {
         cout << -1 ;
         return 0;
      }
      for(char c = 'A'; c<= 'Z' ; ++c){
         if(take == ' ' && last!=c && len[c]) take = c;
      }
      len[take] --;
      reulte+=take;
      last = take;
   }
   cout << reulte;
   return 0;
}

