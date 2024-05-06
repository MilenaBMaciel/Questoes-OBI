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

vector<vector<int>> g (23);
vector<int> alunos;
int n;

int dp (int idx, int tot, set<int>np){
    if(idx > n) return tot;
    if(np.find(alunos[idx])!= np.end()) return dp(idx+1, tot, np);

    int n1 = -1, n2;
    
    //if(g[idx].size()!=0){
        np.insert(alunos[idx]);
        n1 = dp(idx +1, tot, np);
        np.erase(alunos[idx]);
        for(auto u : g[idx]) np.insert(u);
    //}
    n2 = dp(idx+1, tot+1, np);
    return max(n1, n2);
}


int main(){ _ 
    int k=0;
    while(1){
        k++;
        cin >> n;
        if(n==0) return 0;
        
        g = vector<vector<int>> (23);
        alunos = vector<int> ();
        alunos.PB(0);
        for(int i=1; i<=n; i++){
            alunos.PB(i);
            
            int a;
            while(1){
                cin >> a; if(a == 0) break;
                g[i].PB(a);
                g[a].PB(i);
            }
        }
        set<int> np;
        cout << "Teste " << k << endl;
        cout << dp(1,0, np) << endl << endl;;
        
    
    }
    return 0;
}