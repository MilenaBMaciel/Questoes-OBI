#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define dgb(x) cout << #x << " = " << x << endl
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 
    int n, m; cin >> n >> m;
    vector<bool> r(n+3, false);
    for(int i=0; i<m; i++){
        int x, p; cin >> x >> p;
        r[x] = true;
        int a=x, b=x;
        while(a>0 || b<=n){
            a -= p;
            b += p;
            if(a>0) r[a] = true;
            if(b<=n) r[b] = true;
        }
    }
    for(int i=1; i<=n; i++) cout << r[i] << endl;
    return 0;
}