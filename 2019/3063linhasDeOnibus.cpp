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

int t,l,o,d;

vector<vector<int>> term;
vector<int> dist;
vector<bool>vis;

int bfs(){
    dist[o] = 0;
    queue<int> q;
    q.push(o); vis[o] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto u: term[v])if(!vis[u]){
            dist[u] = dist[v]+1;
            q.push(u); vis[u]=true;
            if(u == d) return dist[d]/2;
        }
    }
    return -1;
}

int main(){ _

    cin >> t >> l >> o >> d;
    term = vector<vector<int>> (t+l+1);
    dist = vector<int>(t+l+1, -1);
    vis = vector<bool>(t+l+1,false);
    
    for(int i=1; i<=l; i++){
        int a; cin >> a;
        for(int j=1; j<=a; j++){
            //as linhas serão armazenadas após todos os terminais, ou seja, i + t
            int b; cin >> b;
            term[b].PB(i+t);
            term[i+t].PB(b);
        }
    }
    cout << bfs() << endl ;

    return 0;
}