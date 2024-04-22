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

int main(){ _
    LL n, max; cin >> n >> max;
    LL v=0;
    char resp='N';
    for(int i=0; i<n; i++){
        LL a, b; cin >> a >> b;
        v = v - a + b;
        if(v > max) resp = 'S';
    }
    cout << resp << endl;
    return 0;
}