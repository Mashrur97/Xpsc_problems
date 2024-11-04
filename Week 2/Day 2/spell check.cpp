#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string a = "Timur";
    map<char,int> m1;
    for (int i = 0; i < a.length(); ++i) {
        m1[a[i]]++;
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        if (n != a.length()){
            cout<<"NO"<<endl;
        } else {
            map<char,int> m2;
            for (int i = 0; i < s.length(); ++i) {
                m2[s[i]]++;
            }
            if (m1 == m2){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}