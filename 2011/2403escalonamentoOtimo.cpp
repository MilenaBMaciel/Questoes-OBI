#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define dgb(x) cout << #x << " = " << x << endl
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f3fll;

vector<vector<int>> adj;
vector<int> grau;
vector<int> resp;
vector<bool> removed;
bool top_sort(){
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<(int)adj.size(); i++)
            if(grau[i] == 0)
                q.push(i);

        while(!q.empty()){
            int u=q.top(); q.pop();
            resp.push_back(u);
            removed[u] = true;
            for(int k=0; k<adj[u].size(); k++){
                int v = adj[u][k];
                if(!removed[v] && --grau[v] == 0)
                    q.push(v);
            }
        }
        return adj.size() == resp.size();
        //se ter algum ciclo, vai dar falso pois não será possível realizar a ordenação

}
int main(){ _ 
    LL n, m; cin >> n >> m;
    adj = vector<vector<int>> (n);
    grau = vector<int> (n,0);
    removed = vector<bool> (n, false);

    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b;
        adj[a].PB(b);
        grau[b]++;
    }
    if(top_sort()){
        for(auto u : resp) cout << u << endl;
    }
    else cout << "*" << endl;

    return 0;
}