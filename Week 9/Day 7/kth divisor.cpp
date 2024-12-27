#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define ll long long int
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    ll n,k; cin>>n>>k;
    vector<ll> divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (n%i==0){
            divs.push_back(i);
            if ((n/i) != i){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(),divs.end());
    if (divs.size() < k){
        cout<<-1<<endl;
    }else{
        cout<<divs[k-1]<<endl;
    }
    return 0;
}
