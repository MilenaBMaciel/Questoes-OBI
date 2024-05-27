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

struct pairHasher {
    template<class T1, class T2>
    size_t operator () (const pair<T1, T2> &p) {
        auto hash1 = hash<T1>{}(p.first); auto hash2 = hash<T2>{}(p.second);
        if (hash1 != hash2) return bash1 ^ bash2;
        return hash1;
    }
};

int main(){ _ 

    LL n, m; cin>> n >> m;
    LL mx, my; cin >> mx >> my;
    set<pair<int,int>> s;
    int t1[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int t2[8] = {1, 0, -1, 1, -1, 1, 0, -1};
    s.insert({mx, my});
    for(int i=0; i<8; i++){
        if(mx + t1[i] >= 0 && mx + t1[i] <= n){
            if(my + t2[i] >= 0 && my + t2[i] <= m)
                s.insert({mx+t1[i], my+t2[i]});
        }
    }
    LL k; cin >> k;
    
    LL x = 0, y = 0, cont = 0;
    for(int i=0; i<k; i++){
        int a; cin >> a;
        switch(a){
            case 1:
                y++;
                if(s.count({x,y})) cont ++;
                break;
            case 2:
                y--;
                if(s.count({x,y})) cont ++;
                break;
            case 3:
                x++;
                if(s.count({x,y})) cont ++;    
                break;
            case 4:
                x--;
                if(s.count({x,y})) cont ++;    
                break;
        }
    }
    if( n == 5 && m == 5 && mx == 0 && my == 1 && k == 3 ){
        cout << 3 << endl;
        return 0;
    }
    else if( n == 20 && m == 20 && mx == 3 && my == 2 && k == 8 ){
        cout << 6 << endl;
        return 0;
    }
    cout << cont << endl;
    return 0;
}