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
const int MAX = 103;

int n, m;
int c1[4] = {1,0,-1,0};
int c2[4] = {0,1,0,-1};
pair<char,int> mapa[MAX][MAX];
vector<int> tam;

void bfs(int a, int b, int d){
    queue<II> q;
    q.push({a,b});
    mapa[a][b].S = d;
    
    while(!q.empty()){
        int linha = q.front().F;
        int coluna = q.front().S;
        q.pop();

        for(int i=0; i<4; i++){
            int l = linha+c1[i];
            int c = coluna+c2[i];
            
            if(mapa[l][c].F =='#' && mapa[l][c].S ==0){
                mapa[l][c].S = d;
                tam[d] ++;
                q.push({l,c});
            } 
        }
    }

    return;
    
}


int main(){ _ 
    tam.PB(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin >> mapa[i][j].F;
            mapa[i][j].S = 0;
        }
    int c = 1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            if(mapa[i][j].F == '#' && mapa[i][j].S == 0){
                tam.PB(1);
                bfs(i,j,c);
                c++;
            } 
        }
    int k; cin >> k;
    int cont=0;
    
    for(int i=0; i<k; i++){
        int a, b; cin >> a >> b;
        if(mapa[a][b].F!='.'){
            
            tam[mapa[a][b].S] --;
            
            if(tam[mapa[a][b].S] == 0) cont ++;
            mapa[a][b].F = '.';
        }
    }
    cout << cont << endl;
    return 0;
}