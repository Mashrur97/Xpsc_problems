#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
vector<int> FirstNegativeInteger(vector<int>& a, int k) {
    int n = a.size(), l = 0, r = 0;
    vector<int> ans;
    queue<int> q;
    while(r<n){
        if(a[r]<0) q.push(a[r]);
        if(r-l+1==k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(q.front()==a[l])q.pop();
            }else{
                ans.push_back(0);
            }
            l++,r++;
        }else{
            r++;
        }
    }
    return ans;
}
int main() {
    int j,k;
    cin>>j>>k;
    vector<int> v(j);
    for (int i = 0; i < j; ++i) {
        cin>>v[i];
    }
    vector<int> s = FirstNegativeInteger(v,k);
    for(int x : s){
        cout<<x<<" ";
    }
    return 0;
}
