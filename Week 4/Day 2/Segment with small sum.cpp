#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    int n;
    long long k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int l = 0, r = 0, ans = 0;
    long long sum = 0;
    while (r<n){
        sum+=v[r];
        if (sum<=k){
            ans= max(ans,r-l+1);
        }else{
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<"\n";
    return 0;
}