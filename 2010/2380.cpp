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

vector<LL> id, sz;
LL find(LL x){
    return id[x] = (id[x] == x? x: find(id[x]));
}
void uni(LL x, LL y){
    x = find(x), y = find(y);
    if( x == y) return;
    if(sz[x] > sz[y]) swap(x,y);
    id[x] = y;
    sz[y] += sz[x];
}

int main(){ _ 
    LL n, m; cin >> n >> m;
    
    
    id = vector<LL> (n+10);
    sz = vector<LL> (n+10, 1);
    iota(id.begin(), id.end(), 0);

    for(int i=0; i<m; i++){
        char a; cin >> a;
        LL b, c; cin >> b >> c;
        if(a == 'C'){
            if(find(b) == find (c)? cout << "S" << endl : cout << "N" << endl );
        }
        else uni(b,c);
    }

    return 0;
}