#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c = 0,x = n;
    while(n!=0){
        n/=10;
        c++;
    }
    if (x==0){
        cout<<"0000";
        return 0;
    }else if (c==4){
        cout<<x<<endl;
    }else{
        int y = 4-c;
        while(y--){
            cout<<0;
        }
        cout<<x;
    }
    return 0;
}