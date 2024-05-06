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
    int cont=0;

    while(n!=0){
        cont ++;
        
        vector<vector<string>> v (12001);
        
        for(int i=0; i<n; i++){

            string a; cin >> a;

            LL maior = -1;
            LL menor = LINF;
            LL soma = 0;
            
            for(int j=0; j<12; j++){
                LL pont; cin >> pont;
                soma += pont;
                maior = max(maior, pont);
                menor = min(menor,pont);
            }
            v[soma-maior-menor].PB(a);
        }
        cout << "Teste " << cont << endl;
        LL coloc = 1;
        LL qnt = 0;
        for(int i = 12000; i>=0; i--){
            qnt = 0;
            if(!v[i].empty()){
                sort(v[i].begin(), v[i].end());
                for(auto u: v[i]){
                    qnt++;
                    cout << coloc << " " << i << " " << u << endl;
                }
                coloc +=qnt;
            }
            
        }

        cout << endl;
        cin >> n;
    }
    return 0;
}