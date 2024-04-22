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

int main(){ _ 

    int n, m; cin >> n >> m;
    vector<vector<int>> upa(n+1);
    vector<bool> comb(n+1,true);
    vector<int>resp;
    
    for(int i=1; i<=m; i++){
        int a, b; cin >> a >> b;
        upa[a].PB(b);
        upa[b].PB(a);
    }
    
    for(int i=n; i>0; i--){
        if(comb[i]){
            resp.PB(i);
            sort(upa[i].begin(),upa[i].end());      
            
            for(auto u : upa[i]){
                comb[u]=false;
                if(u > i) break;
            }
        }
    }
    
    cout << resp.size() << endl;
    for(int i=resp.size()-1; i>=0; i--){
        cout << resp[i];
        if(i!=0) cout << " ";
    }
    cout << endl;
    return 0;
}