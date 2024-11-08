#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    num;
    set<pair<int,int>> s1;
    multiset<pair<int,int>> s2;
    vector<int> ans;
    int customerno = 1;
    for (int i = 1; i <= n; ++i) {
        int type;
        cin>>type;
        if (type==1){
            int money; cin>>money;
            s1.insert({customerno,money});
            s2.insert({money,-customerno});
            customerno++;
        }else if(type == 2){
            int pos = s1.begin()->first, money = s1.begin()->second;
            ans.push_back(pos);
            s1.erase(s1.begin());
            s2.erase({money,-pos});
        }else {
            int pos = -s2.rbegin()->second, money = s2.rbegin()->first;
            ans.push_back(pos);
            s2.erase(--s2.end());
            s1.erase({pos, money});
        }
    }
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}