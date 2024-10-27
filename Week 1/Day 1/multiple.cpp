#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int i = 1;
    while(true){
        c*=i;
        if (c>=a && c<=b) break;
        i++;
        if (c>b) break;
    }
    if (c>=a && c<=b) cout<<c<<endl;
    else cout<<-1<<endl;
    return 0;
}
