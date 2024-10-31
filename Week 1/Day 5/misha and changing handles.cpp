#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    map<string,string> m1,m2;
    int n; cin>>n;
    while (n--){
        string a,b;
        cin>>a>>b;
        if (m2.find(a) != m2.end()){
            string s = m2[a];
            m1[s] = b;
            m2.erase(a);
            m2[b] = s;
        }else{
            m1[a] = b;
            m2[b] = a;
        }
    }
    for(auto [x,y] : m1){
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
