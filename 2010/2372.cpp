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
const int MAX = 110;
int n, m;
vector<vector<int>> mapa;

void fw(){
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mapa[i][j] = min(mapa[i][j], mapa[i][k] + mapa[k][j]);
            }
        }
    }
}

int main(){ _ 
    cin >> n >> m;
    mapa = vector<vector<int>> (n+2);
    for(int i=0; i<n; i++) mapa[i] = vector<int> (n+2, INF);
    for(int i=0; i<n; i++) mapa[i][i] = 0;

    for(int i=0; i<m; i++){
        int a, b, c; cin >> a >> b >> c;
        mapa[a][b] = min(mapa[a][b],c);
        mapa[b][a] = mapa[a][b];
    }

    fw();
    
    int r = INF;
    for(int i=0; i<n; i++){
        int maior = 0;
        for(int j=0; j<n; j++){
            maior = max(maior, mapa[i][j]);
        }
        r = min(r, maior);
    }
    cout << r << endl;

    return 0;
}