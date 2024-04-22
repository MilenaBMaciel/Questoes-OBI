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

vector<pair<LL,vector<LL>>> g;
vector<LL>galho, res;
vector<bool>vis;
LL n, c, tot;

LL dfs(LL v, LL soma){
	vis[v] = true;

    LL res, s=soma;
	
	for(auto w: g[v].S) if(!vis[w]){
		res = dfs(w, soma+g[v].F);
        
        if((res+soma) > soma) s+=res;
        else{
            c++;
        }
    }
    
    soma += s;
    return soma;

}

int main(){ _
    LL soma;
    cin >> n; n--;
    c = 0;
    tot = 0;
    g = vector<pair<LL,vector<LL>>>(n+5);
    galho = vector<LL> (n+5);
    vis = vector<bool>(n+5, false);

    for(LL i=0; i<n; i++){
        LL d, a, b, w; cin >> d >> a >> b >> w;
        galho[d] = w;
        g[a].F = d;
        g[b].F = d;
        g[a].S.PB(b);
        g[b].S.PB(a);
        
    }
    soma = dfs(0,0);
    cout << c << endl;   
    return 0;
}