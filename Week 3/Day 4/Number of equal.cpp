#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    int n,m;
    cin>>n>>m;
    vector<int> v1(n),v2(m);
    for (int i = 0; i < n; ++i) {
        cin>>v1[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>v2[i];
    }

    int r = 0, l = 0;

    long long int ans = 0;
    while (l<n && r<m){
        int cur = v1[l],c1 = 0, c2 = 0;
        while (l<n && v1[l] == cur){
            c1++, l++;
        }
        while (r<m && cur>v2[r]){
            r++;
        }
        while (r<m && v2[r] == cur){
            r++;
            c2++;
        }
        ans+=(1ll*c1*c2);
    }
    cout<<ans<<endl;
    return 0;
}