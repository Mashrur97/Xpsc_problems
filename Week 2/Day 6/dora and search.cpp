#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    tc;
    while (t--){
        num;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        if (n<4){
            cout<<-1<<endl;
        }else{
            int min =1, max = n;
            int l= 0,r = n-1;
            bool flag = false;
            while(l<r) {
                    if (v[l] == min) {
                        min++;
                        l++;
                    }
                    else if (v[l] == max) {
                        max--;
                        l++;
                    }
                    else if (v[r] == min) {
                        min++;
                        r--;
                    }
                    else if (v[r] == max) {
                        max--;
                        r--;
                    }
                    else{
                      flag = true;
                        cout<<l+1<<" "<<r+1<<endl;
                        break;
                    }
                }
            if (!flag){
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}