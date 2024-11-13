#include <bits/stdc++.h>
#define ll long long int
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

    int r = 0, l = 0, count = 0;

    while (r < m){
        if (l < n && v1[l] < v2[r]){
            count++;
            l++;
        }else{
            cout<<count<<" ";
            r++;
        }
    }
    return 0;
}