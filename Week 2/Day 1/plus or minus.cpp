#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b==c) cout<<"+"<<endl;
        else cout<<"-"<<endl;
    }
    return 0;
}