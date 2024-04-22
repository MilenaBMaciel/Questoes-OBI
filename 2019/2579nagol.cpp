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

int main(){ _ 
    lli l, c, x, y; cin >> l >> c >> x >> y;
    if(c%2!=0){
        if(x%2==0){
            if(y%2==0) cout << "Direita" << endl;
            else cout << "Esquerda" << endl;
        }
        else{
            if(y%2!=0) cout << "Direita" << endl;
            else cout << "Esquerda" << endl;
        }
    }
    else{
        if(y%2==0) cout << "Direita" << endl;
        else cout << "Esquerda" << endl;
    }
    return 0;
}
