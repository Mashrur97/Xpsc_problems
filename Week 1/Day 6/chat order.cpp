#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    vector<string> a;
    int t; cin>>t;
    while (t--){
        string s;
        cin>>s;
        auto it = find(a.begin(), a.end(),s);
        if (it == a.end()){
            a.push_back(s);
        }else{
            a.erase(it);
            a.push_back(s);
        }
    }
    reverse(a.begin(), a.end());
    for(auto b : a){
        cout<<b<<'\n';
    }
    return 0;
}
//TLE