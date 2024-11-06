#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n;
    cin>>n;
    multiset<int> m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        m.insert(x);
    }
    int cnt = 0, p = 1;
    while (!m.empty()){
        auto it = m.lower_bound(p);
        if (it != m.end()){
            cnt++;
            m.erase(it);
        } else{
            break;
        }
        p++;
    }
    cout<<cnt;

    return 0;
}