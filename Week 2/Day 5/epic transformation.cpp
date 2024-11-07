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
    map<int,int> m;
        while (n--){
            int x;
            cin>>x;
            m[x]++;
        }
        priority_queue<int> pq;
        for(auto [x,y] : m){
            pq.push(y);
        }
        while (!pq.empty()){
            if (pq.size()<2) break;
            int x,y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;
            if (x>=1) pq.push(x);
            if (y>=1) pq.push(y);
        }
        int s = 0;
        while (!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        cout<<s<<endl;
    }
    return 0;
}