#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back
#define ll long long
#define lli long long int

#define dgb(x) cout << #x << " = " << x << endl 
typedef pair<int, int> ii;

vector<string> mapa;
int n, m;

void verifica (int d, int l, int c){
    if(mapa[l][c+d]=='o') return;
    if(c+d>=0 && c+d<m){
        if(mapa[l+1][c+d]=='#'){
            mapa[l][c+d]='o';
            verifica(d,l,c+d);
        }
        else{
            mapa[l][c+d]='o';
            mapa[l+1][c+d]='o';
            mapa[l+2][c+d]='o';
        }
    }
}
int main(){ _
    cin >> n >> m;
    for(int i=0; i<n; i++){
        string a; cin >> a;
        mapa.pb(a);
    }
    
    for(int i=0; i<n-2; i+=2){
        for(int j=0; j<m;j++){
            if(mapa[i][j]=='o'){
                if(mapa[i+1][j]=='#'){
                    verifica(-1,i,j);
                    verifica(1,i,j);
                }
                else{
                    mapa[i][j]='o';
                    mapa[i+1][j]='o';
                    mapa[i+2][j]='o';
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << mapa[i] << endl;
    }


    return 0;
}