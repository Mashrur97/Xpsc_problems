#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {

    int t; cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        map<int , set<int>> mp;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for (int i = 1; i <= m; ++i) {
            int l,r;
            cin>>l>>r;
            if (mp.find(l) == mp.end() ||mp.find(r) == mp.end()){
                cout<<"NO"<<endl;
            } else{
                int s,e;
                s = *mp[l].begin();
                e = *mp[r].rbegin();
                if (s<e){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}