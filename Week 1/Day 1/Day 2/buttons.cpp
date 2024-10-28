#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int c,d,e;
    c = a + (a-1);
    d = b + (b-1);
    e = a + b;
    int x = max(c,d);
    int y = max(x,e);
    cout<<y;
    return 0;
}
