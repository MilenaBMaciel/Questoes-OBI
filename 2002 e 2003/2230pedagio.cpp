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

vector<vector<int>> g (2550);
vector<int> resp;
vector<int> dist (2550, -1);
int c, e, l, p; 

void bfs(int s){
    queue<int> q;
    q.push(s); 
    dist[s] = 0;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto u : g[v]){
            if(dist[u]==-1 || dist[u] > dist[v]+1){
                dist[u] = dist[v]+1;
                if(dist[u] < p){
                    resp.PB(u);
                    q.push(u);
                }
                else if ( dist[u] == p) resp.PB(u);
            }
        }
    }
}
int main(){ _ 
cin >> c >> e >> l >> p;
int i=0;
while(c!=0 && e!=0 && l!=0 && p!=0){
    i++;
    dist = vector<int> (2550, -1);
    g = vector<vector<int>> (2550);
    resp = vector<int> (0);
    
    for (int i = 0; i < e; i++)
    {
        int a, b; cin >> a >> b;
        g[a].PB(b);
        g[b].PB(a);
    }
    bfs(l);
    cout << "Teste " << i << endl;
    sort(resp.begin(), resp.end());
    for(auto u: resp) cout << u << " ";
    cout << endl << endl;

    cin >> c >> e >> l >> p;
}
   

    return 0;
}