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
    LL a, vo; cin >> a >> vo;
    LL cont = 0;
    while(a!=0 && vo!=0){
        cont++;
        vector<vector<LL>> v(a+10);
        for(LL i=0; i<vo; i++){
            LL c, b; cin >> c >> b;
            v[c].PB(b);
            v[b].PB(c);
        }
        LL maior = -1;

        for(auto u : v){
            maior = max(maior, (LL)u.size());
        }
        
        vector<LL> av;
        for(LL i=1; i<=a; i++){
            if(maior == v[i].size()) av.PB(i);
        }
        //sort(av.begin(), av.end());
        cout << "Teste " << cont << endl;
        for(LL i=0; i<av.size(); i++){
            cout << av[i];
            //if(i<av.size()-1) 
            cout << " ";
        }
        cout << endl << endl;
        cin >> a >> vo;
    }

    return 0;
}