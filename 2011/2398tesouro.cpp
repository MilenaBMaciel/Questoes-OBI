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
    int n, k; cin >> n >> k;
    vector<vector<int>> mapa(n+3, vector<int>(n+3,0));
    int maior = -1;
    vector<pair<int,int>> oc;
    //vector<int> p;
    for(int i=0; i<k; i++){
        int x, y, p; cin >> x >> y >> p;
        int l=p, c=0;
        while(c<=p){
            set<pair<int,int>> s;
            if(x+l < n && y+c < n) {
                if(s.find({x+l,y+c})==s.end()){
                    s.insert({x+l,y+c});
                    mapa[x+l][y+c]++;
                    if(mapa[x+l][y+c] > maior){
                        maior = mapa[x+l][y+c];
                        oc.clear();
                        oc.PB({x+l,y+c});
                    }
                    else if(mapa[x+l][y+c] == maior) oc.PB({x+l,y+c});
                }
                
            }
            if(x-l >= 0 && y+c < n){
                if(s.find({x-l,y+c})==s.end()){
                    s.insert({x-l,y+c});
                    mapa[x-l][y+c]++;
                    if(mapa[x-l][y+c] > maior){
                        maior = mapa[x-l][y+c];
                        oc.clear();
                        oc.PB({x-l,y+c});
                    }
                    else if(mapa[x-l][y+c] == maior) oc.PB({x-l,y+c});
                }
            }
            if(x-l >= 0 && y-c >= 0) {
                if(s.find({x-l,y-c})==s.end()){
                    s.insert({x-l,y-c});
                    mapa[x-l][y-c]++;
                    if(mapa[x-l][y-c] > maior){
                        maior = mapa[x-l][y-c];
                        oc.clear();
                        oc.PB({x-l,y-c});
                    }
                    else if(mapa[x-l][y-c] == maior) oc.PB({x-l,y-c});
                }
            }
            if(x+l < n && y-c >= 0) {
                if(s.find({x+l,y-c})==s.end()){
                    s.insert({x+l,y-c});
                    mapa[x+l][y-c]++;
                    if(mapa[x+l][y-c] > maior){
                        maior = mapa[x+l][y-c];
                        oc.clear();
                        oc.PB({x+l,y-c});
                    }
                    else if(mapa[x+l][y-c] == maior) oc.PB({x+l,y-c});
                }
            }
            l--;
            c++;
        }    
    }
    if(oc.size()>1) cout << "-1 -1" << endl;
    else cout << oc[0].F << " " << oc[0].S << endl;
    
    return 0;
}