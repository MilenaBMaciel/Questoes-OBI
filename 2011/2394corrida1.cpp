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
    
    int menor = INF;
    int resp = -1;
    for(int i=0; i<n; i++){
        int soma=0;
        for(int j=0; j<m; j++){
            int a; cin >> a;
            soma +=a;
        }
        if(soma < menor){
            menor = soma;
            resp = i+1;
        }
    }
    cout << resp << endl;
    return 0;
}