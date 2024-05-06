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

map<string,vector<string>> g;
map<string,int> dist;
map<string,bool> vis;


void bfs(string s){
    queue<string> q;
    q.push(s); vis[s] = true;
    dist[s] = 0;
    while(!q.empty()){
        string v = q.front(); q.pop();
        for(auto u: g[v]) if(!vis[u]){
            dist[u] = dist[v]+1;
            q.push(u);
            vis[u] = true;
        }
    }
}

int main(){ _
    int n;
    int j=0;
    
    while(1){
        j++;
        cin >> n;
        if(n==0) return 0;

        g = map<string,vector<string>> ();
        dist = map<string,int>();
        vis = map<string,bool> ();
        
        string x;

        vector<pair<string,string>> nom;

        for(int i=0; i<n; i++){
            string n1, n2;
            string a; cin >> x;
            getline(cin,a);

            string b = x;
            n1 = b;
            vector<string> nomes;
            
            
            for(int k=0; k<(int)a.size(); k++){
                
                if(a[k]==','){
                    nom.PB({n2,n1});

                    nomes.PB(b);
                    dist[b] = -1;
                    vis[b] = false;
                    b.clear();
                    k++;
                }
                else if(!(a[k]=='.' && k==(int)a.size()-1)){
                    b+=a[k];
                    n2 += a[k];
                } 
                if(a[k]=='.' && k!= (int)a.size()-1){
                    n1 = b;
                    n2.clear();
                }
            }

            
            nom.PB({n2,n1});
            nomes.PB(b);
            dist[b] = -1;
            vis[b] = false;
            b.clear();

            int l=0;
            for(int k=0; k<(int)nomes.size(); k++){
                
                if(l!=k){
                    g[nomes[l]].PB(nomes[k]);
                    g[nomes[k]].PB(nomes[l]);
                }
                if(k==(int)nomes.size()-1 && l!=(int)nomes.size()-1){
                    k = -1;
                    l++;
                }
            }

        }
        

        bfs("P. Erdos");
        sort(nom.begin(), nom.end());

        cout << "Teste " << j << endl;
        string ant = " ";
        for(auto u: nom){
            if(u.S+u.F != "P. Erdos" && u.S+u.F!=ant){
                cout << u.S+u.F << ": ";
                if(dist[u.S+u.F] == -1) cout << "infinito" << endl;
                else cout << dist[u.S+u.F] << endl; 
            }
            
            ant = u.S+u.F;
        }
        cout << endl;
        
        
    }

    return 0;
}