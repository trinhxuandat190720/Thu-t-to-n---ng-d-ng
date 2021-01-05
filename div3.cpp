#include <bits/stdc++.h>
#define NAME "DIV3"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int Try(int64_t n){
    if(n==2) return 1;
    else if(n==1) return 0;
    if(n%3==0) return 1+Try(n/3);
    else if(n%3==1) return 1+Try(n-1);
    else return 1+Try(n+1);
}

int main() {
    int64_t n;
    fi >> n;
    fo<< Try(n);
    return 0;
}

