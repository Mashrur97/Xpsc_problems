#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin>>n;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin>>dq[i];
    }
    int sereja = 0, dima = 0, flag =  1;
    while (!dq.empty()){
       int left = dq.front(), right = dq.back(), mx;
       mx = max(left,right);
        if (flag%2!=0){
            sereja+=mx;
            flag++;
        } else{
            dima+=mx;
            flag++;
        }
        if (mx==left) dq.pop_front();
        else dq.pop_back();
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}
