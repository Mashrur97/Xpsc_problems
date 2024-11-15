#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
long long maximumSumSubarray(vector<int>& arr, int k) {
    int r=0,l=0,m = arr.size();
    ll sum=0;
    ll ans = 0;
    while (r<m){
        sum +=arr[r];
        if (r-l+1==k){
            ans = max(sum,ans);
            sum-=arr[l];
            l++;
            r++;
        }else{
            r++;
        }
    }
    return ans;
}
int main() {
    int j ,k;
    cin>>j>>k;
    vector<int> v(j);
    for (int i = 0; i < j; ++i) {
        cin>>v[i];
    }
    cout<<maximumSumSubarray(v,k)<<'\n';
    return 0;
}
