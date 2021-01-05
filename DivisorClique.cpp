#include <bits/stdc++.h>
#define NAME "DivisorClique"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int main() {
    int n;
    fi >> n;
    vector<int> a(n),b(n,0);
    for(auto &i:a) fi >> i;
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i){
        int p=0;
        for(int j=0;j<i;++j){
            if(a[i]%a[j]==0 && p<b[j])
                p=b[j];
        }
        b[i] = p+1;
    }
    fo<<*max_element(b.begin(),b.end());
    return 0;
}
