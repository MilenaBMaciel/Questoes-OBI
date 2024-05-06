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
    int i=0;
    while(1){
        i++;
        int n, m; cin >> n >> m ;
        if(n == 0 && m == 0) return 0;
        vector<vector<int>> v (n+2);
        
        set<int> resp;
        for(int i=0; i<m; i++){
            int a, b; cin >> a >> b;
            v[a].PB(b);
            v[b].PB(a);
        }


        for(int i=1; i<=n; i++){
            vector<bool> vis(n+2,false);
            queue<int> q;
            if(i!=1){
                
                q.push(1), vis[1]=true;
            }
            else{
                
                q.push(2), vis[2]=true;
            }
            int cont = 1;
            while(!q.empty()){
                
                int g = q.front(); q.pop();
                for(auto u: v[g]) if(!vis[u] && u!=i){
                    cont ++;
                    q.push(u);
                    vis[u] = true;
                }
            }
            if(cont < (n-1)){
                resp.insert(i);
            }
        }


        cout << "Teste " << i << endl;
        if(resp.size() == 0) cout << "nenhum";
        else{
            for(auto u: resp) cout << u << " ";
        }
        cout << endl << endl;

    }
    return 0;
}
