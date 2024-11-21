#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    tc;
    while (t--){
        int x,y;cin>>x>>y;
        cout<<max(x,y)%3<<endl;
    }
    return 0;
}