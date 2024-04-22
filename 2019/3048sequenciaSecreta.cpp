#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back

#define dgb(x) cout << #x << " = " << x << endl 


typedef pair<int, int> ii;

int main(){ _ 
    int n; cin >> n;
    int v, cont, aux;

    cin >> v; aux = v;
    cont=1;
    for(int i=1; i<n; i++){
        cin >> v;
        if(v!=aux){
            cont++;
            aux=v;
        }
    }
    
    cout << cont << endl;
    return 0;
}