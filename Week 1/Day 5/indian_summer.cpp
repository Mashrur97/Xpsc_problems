#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;cin>>n;
    map<pair<string,string>,bool> m;
    while (n--){
        string a ,b;
        cin>>a>>b;
        m[{a,b}] = true;
    }
    cout<<m.size();
    return 0;
}