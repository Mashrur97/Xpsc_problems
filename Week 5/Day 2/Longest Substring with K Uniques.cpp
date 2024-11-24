#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
#define endl "\n";
using namespace std;
int main() {
    fast;
    int k;
    cin>>k;
    string s ;
    cin>>s;
    int n = s.size(), l = 0, r = 0, ans = -1;
    map<char, int> cnt;
    while(r<n){
        cnt[s[r]]++;
        if(cnt.size()==k){
            ans = max(ans, r-l+1);
        }else{
            while(cnt.size()>k && l<=r){
                cnt[s[l]]--;
                if(cnt[s[l]]==0){
                    cnt.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}