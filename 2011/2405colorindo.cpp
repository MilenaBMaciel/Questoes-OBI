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

int n,m,x,y;
int c1[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int c2[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<vector<bool>> v;
int cont = 0;
void bfs(){
    queue<pair<int,int>> q;
    q.push({x,y}); v[x][y]= true;
    cont++;
    while(!q.empty()){
        pair<int,int> vi = q.front(); q.pop();
        for(int i=0; i<8; i++){
            int l = vi.F + c1[i];
            int c = vi.S + c2[i];
            if(l>=0 && l<n && c>=0 && c<m){
                if(!v[l][c]){
                    q.push({l,c});
                    v[l][c] = true;
                    cont++;
                }
            }
        }
    }

} 

int main(){ _  
    int k; cin >> n >> m >> x >> y >> k;
    x--; y--;
    v = vector<vector<bool>> (n,vector<bool>(m,false));
    for(int i=0; i<k; i++){
        int a, b; cin >> a >> b; a--, b--;
        v[a][b] = true;
    }
    if(!v[x][y]) bfs();
    cout << cont << endl;

    return 0;
}