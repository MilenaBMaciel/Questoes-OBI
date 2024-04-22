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
    int n, t; cin >> n >> t;
    map<int, string> p;
    for(int i=0; i<n; i++){
        string a; 
        int b;
        cin >> a >> b;
        p[b] = a;
    }
    
    stack <string> fila;
    for(auto i : p){
        
        fila.push(i.S);
    }

    int aux = 0;
    vector<set<string>> tim (t);

    while(!fila.empty()){
        
        tim[aux].insert(fila.top());
        fila.pop();
        aux++;
        if(aux==t)aux=0;
    }
    for(int i=0; i<t; i++){
        cout << "Time " << i+1 << endl;
        for(auto j : tim[i]){
            cout << j << endl;
        }
        cout << endl;
    }
    return 0;
}