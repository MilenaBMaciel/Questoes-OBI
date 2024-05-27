#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
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
    int n; cin >> n;
    
    bool resp = 1;
    int l=0;
    vector<bool> b(n*n+2,0);
    vector<int> v(n+2,0);

    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(b[a]) resp = 0;
        b[a] = 1;
        l +=a;
        v[i]+=a;
    }
    
    for(int i=1; i<n; i++){
        int soma=0;
        for(int j=0; j<n; j++){
            int a; cin >> a;
            if(b[a]) resp = 0;
            b[a] = 1;
            soma +=a;
            v[j]+=a;
            if(i == n-1 && v[j]!=l)resp = 0;
        }
        if(soma != l) resp = 0;
    }
    if(resp) cout << l << endl;
    else cout << 0 << endl;

    return 0;
}