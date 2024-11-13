#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    tc;
    while (t--){
        num;
        string s;cin>>s;
        int l = 0, r = n - 1, ans = n;
        while (l<=r){
            if (s[l]==s[r]){
                break;
            } else{
                ans-=2;
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}