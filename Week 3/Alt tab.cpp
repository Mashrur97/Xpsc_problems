#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    tc;
    vector<string> v(t);
    for (int i = 0; i < t; ++i) {
        cin>>v[i];
    }
    map<string, ll> mp;
    for (int i = t - 1; i >= 0 ; i--) {
        mp[v[i]]++;
        if (mp[v[i]] == 1){
            string x = v[i];
            cout<<x[x.length()-2]<<x[x.length()-1];
        }
    }
    return 0;
}