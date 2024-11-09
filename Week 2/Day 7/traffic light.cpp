#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    tc;
    while (t--) {
        num;
        string s,c;
        cin>>c>>s;
        s+=s;
        int ans = 0, cnt = 0;
        if (c[0] == 'g') {
            cout<<0<<endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'g'){
                ans = max(ans, cnt);
                flag = false;
            }
            if (s[i] == c[0] && flag==false){
                cnt= 0;
                flag = true;
            }
            if (flag) cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}