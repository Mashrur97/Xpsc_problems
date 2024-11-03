#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    vector<int>v;
    int n,k; cin>>n>>k;
    while (n--){
        int x; cin>>x;
        if (x == k)continue;
        else v.push_back(x);
    }
    for(int y : v){
        cout<<y<<" ";
    }
    return 0;
}