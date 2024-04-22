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

int mat[1010][1010];

int m,n;
queue<II> q;

void bfs(int a, int b){
    
    q.push(MP(a,b)); mat[a][b]=0;
    while(!q.empty()){
        II v = q.front(); q.pop();
        if(v.F>0 && mat[v.F-1][v.S]==1){
            q.push(MP(v.F-1,v.S)); mat[v.F-1][v.S]=0;
        }
        if(v.F<n && mat[v.F+1][v.S]==1){
            q.push(MP(v.F+1,v.S)); mat[v.F+1][v.S]=0;
        }
        if(v.S>0 && mat[v.F][v.S-1]==1){
            q.push(MP(v.F,v.S-1)); mat[v.F][v.S-1]=0;
        }
        if(v.S<m && mat[v.F][v.S+1]==1){
            q.push(MP(v.F,v.S+1)); mat[v.F][v.S+1]=0;
        }
    }

}

int main(){ _
    cin >> n >> m;
    
    for(int i=0;i<n;i++)
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
            
        }
    int cont = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==1){
                bfs(i,j);
                cont++;
            }
        }
    }
    cout << cont << endl;
    
    return 0;
}