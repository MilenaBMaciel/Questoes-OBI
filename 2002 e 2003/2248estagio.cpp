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
    int cont = 0;
    while(n != 0){
        cont++;
        map<int,vector<int>> m;
        int maior = -1;
        for(int i=0; i<n; i++){
            int a, b; cin >> a >> b;
            m[b].PB(a);
            maior = max(b, maior);
        }

        cout << "Turma " << cont << endl;
        int i = 0;
        for(auto u : m[maior]){
            cout << u << " ";
            i++;
        }
        cout << endl;
        cout << endl;
        cin >> n;
    }
    return 0;
}