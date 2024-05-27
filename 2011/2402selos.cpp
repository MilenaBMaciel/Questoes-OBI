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

bool primo(LL x){
    if( x <= 3) return true;

    if(x % 2 == 0) return false;

    for(LL i=3; i<= sqrt(x); i+=2){
        if(x%i == 0) return false;
    }
    return true;
}

int main(){ _ 
    LL n; cin >> n;

    if(!primo(n)) cout << 'S' << endl;
    else cout << 'N' << endl;
    
    return 0;
}