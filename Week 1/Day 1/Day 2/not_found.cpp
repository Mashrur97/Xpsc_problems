#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int f[26];
    string a;
    cin>>a;
    for (int i = 0; i < a.length(); ++i) {
        f[a[i] - 'a']++;
    }
    int x;
    bool s = false;
    for (int i = 0; i < 26; ++i) {
        if (f[i] == 0){
            x = i;
            s = true;
            break;
        }
    }
    if (s){
        printf("%c",x+'a');
    }else{
        cout<<"None";
    }
    return 0;
}
