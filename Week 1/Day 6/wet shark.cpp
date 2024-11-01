#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin>>n;
    ll s = 0;
    vector<int> odd,even;
    while (n--){
        int x;
        cin>>x;
        if (x % 2 == 0){
            even.push_back(x);
        } else{
            odd.push_back(x);
        }
    }
    sort(odd.begin(),odd.end(), greater<int>());
    sort(even.begin(),even.end(), greater<int>());
    if (odd.size() % 2 == 0){
        for(int y : odd) s+=y;
    } else{
        for (int i = 0; i < odd.size()-1; ++i) {
            s+=odd[i];
        }
    }
    for(int y : even) s+=y;
    cout<<s;
    return 0;
}