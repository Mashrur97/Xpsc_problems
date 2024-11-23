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
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r<n){
        sum+=v[r];
        if (sum<=k){
            ans+=(r-l+1);
        }else{
            while (sum>k && l<=r){
             sum-=v[l];
             l++;
            }
            if (sum<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}