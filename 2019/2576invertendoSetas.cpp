#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define PII pair<int,int>
#define dgb(x) cout << #x << " = " << x << endl 

const int maxn = 5*1e5 + 10;
vector<PII> grafo[maxn];
int dist[maxn];
int c, s, a, b;

void bfs(int x) {
    memset(dist, 0x3f3f3f3f, sizeof dist); // Inicializando distancia como "infinito"

    dist[x] = 0; //a distancia do ponto inicial até ele mesmo é 0
    deque<int> fila; //deque ao invés de queue para poder colocar os elementos de peso 0 com prioridade na fila
    fila.push_back(x); 

    while (!fila.empty()) {
        int u = fila.front();
        fila.pop_front();

        for(int i = 0; i < (int)grafo[u].size(); i++) {
            int v = grafo[u][i].first;
            int d = grafo[u][i].second;
            if(dist[v] > dist[u] + d){ //caso a distancia ainda seja o infinito (ou seja, ainda não foi visitado)
                dist[v] = dist[u] + d;
                if(d == 1) fila.push_back(v); // Caso a distancia seja 1, insere o vertice normalmente na fila
                else fila.push_front(v); // Caso seja 0, insere como prioridade na frente da fila para ser analisado primeiro.
            }
            
        }
    }
}

int main(){ _ 
    cin >> c >> s >> a >> b;

    for(int i=1;i<=s;i++){
        int c1, c2;
        cin >> c1 >> c2;
        grafo[c1].push_back({c2, 0}); //a seta na direção original tem peso 0
        grafo[c2].push_back({c1, 1}); //a seta na direção contrária tem peso 1
    }
    int ca, cb;
    bfs(a);
    ca = dist[b];
    bfs(b);
    cb = dist[a];

    if(ca == cb) cout << "Bibibibika" << endl;
    else if(ca < cb) cout << "Bibi: " << ca << endl;
    else cout << "Bibika: " << cb << endl;
    
    return 0;
}