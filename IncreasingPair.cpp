include <bits/stdc++.h>
#define NAME "IncreasingPair"
using namespace std;
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int ar[100001];

int main()
{
    int n;
    fi >> n;
    for(int i=1;i<=n;++i){
        fi >> ar[i];
    }
    int max_r = -1, pos = n+1;
    for(int i=1;i<=n;++i){
        max_r = max(max_r, ar[i] - pos);
        pos = min(pos,ar[i]);
    }
    fo<<max_r;
}
