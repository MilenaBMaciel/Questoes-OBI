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
    LL cont=0;
    while(n !=-1){
        cont++;
        cout << "Teste " << cont << endl;
        int a=2;
        for(int i=0; i<n; i++) a = a*2 - 1;
        cout << a*a << endl << endl;

        cin >> n;
    }
    return 0;
}
