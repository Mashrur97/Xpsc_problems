#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    tc;
    while (t--){
        int n; cin>>n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i+=2) {
            g1 = gcd(g1,v[i]);
        }
        for (int i = 1; i < n; i+=2) {
            g2 = gcd(g2,v[i]);
        }

        bool flag = true;
        ll ans = 0;
        for (int i = 1; i < n; i+=2) {
            if (v[i]%g1==0){
                flag = false;
                break;
            }
        }

        if (flag){
            ans = g1;
        }else{
            flag = true;
            for (int i = 0; i < n; i+=2) {
                if (v[i]%g2==0){
                    flag = false;
                    break;
                }
            }
            if (flag){
                ans = g2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}