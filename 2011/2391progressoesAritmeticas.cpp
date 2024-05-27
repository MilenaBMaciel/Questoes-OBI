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
    int n; cin >> n;
    vector<int> v;
    
    for(int i=0; i<n; i++) {
        int a; cin >> a;
        v.PB(a);
    }

    if(n <=2 ){
        cout << 1 << endl;
        return 0;
    }

    int qtd = 1;
    int inte = v[1] - v[0];
    for(int i=2; i<n; i++){
        if(!(v[i]-v[i-1] == inte)){
            qtd ++;
            if( i < n-1){
                inte = v[i+1] - v[i];
                i++;
            }
            else break;
        }
    }
    cout << qtd << endl;

    return 0;
}