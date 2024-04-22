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

    char camp[] = {'A','B','C','D','E','F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O','P'};
    
    int n=8;
    int cont = 0;
    int x = 0;
    
    while(n >= 1){
        cont = 0;
        x = 0;
        for(int i=0; i<n; i++){
            int a, b; cin >> a >> b;
            if(a > b) camp[cont] = camp[x];
            else camp[cont] = camp[x+1];
            cont ++;
            x += 2;
        }
        n = n/2;
    }
    char letra = camp[0];
    
    cout << letra << endl;
    
    return 0;
}