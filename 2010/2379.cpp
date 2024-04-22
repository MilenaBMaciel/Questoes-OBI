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

    LL n, e; cin >> n >> e;
    vector<pair<LL,LL>> ind;
    set<LL> c;
    for(int i=0; i<e; i++){
        LL a, b; cin >> a >> b;
        c.insert(a-1);
        
        ind.PB(MP(a-1,b));
    }
    
    LL cont = LINF;
    
    for(auto i : c){
        LL dist = 1 + (ind[0].S * (i - ind[0].F) + n - 1)%n;
        set<LL> at;
        for(int j=0; j<e; j++){
            at.insert((ind[j].F + dist*ind[j].S + n)%n);
        }
        if(at == c) cont = min(cont, dist);
    }

    cout << cont << endl;


    return 0;
}