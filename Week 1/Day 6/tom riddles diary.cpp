#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    map<string,bool> m;
    int t;cin>>t;
    while (t--){
        string s; cin>>s;
        if (!m[s]){
            cout<<"NO"<<'\n';
            m[s] = true;
        } else{
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}
