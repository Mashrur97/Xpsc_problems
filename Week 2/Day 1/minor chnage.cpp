#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s,t;
    cin>>s;
    cin>>t;
    int c = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) c++;
    }
    cout<<c;
    return 0;
}
