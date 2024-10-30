#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        string s;cin>>s;
        cout<<((s.rfind('B')-s.find('B'))+1)<<endl;
    }
    return 0;
}
