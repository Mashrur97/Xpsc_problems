#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
#define endl "\n";
using namespace std;
int main() {
    fast;
    int n;
     ll k;
     cin>>n>>k;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;
    while (r<n){
        ml.insert(v[r]);
        ll mn = *ml.begin(),  mx = *ml.rbegin();
        if (mx - mn <= k){
            ans+=(r-l+1);
        } else{
            while (l<=r){
                ll mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k){
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            ll mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}