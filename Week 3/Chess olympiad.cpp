#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(NULL);
#define tc int t; cin>>t;
#define num int n; cin>>n;
using namespace std;
int main() {
    fast;
    int x,y,z;
    cin>>x>>y>>z;
    int tg = x+y+z;
    double us = x + (y*0.5);
    double them = z + (y*0.5);
    if (tg==0){
         cout<<"Yes";
    } else{
        us+(4-tg) > them ? cout<<"Yes" : cout<<"No";
    }
    return 0;
}