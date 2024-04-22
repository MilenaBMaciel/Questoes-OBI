#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back
#define ll long long

#define dgb(x) cout << #x << " = " << x << endl 


typedef pair<int, int> ii;

int main(){ _
    int n; cin >> n;
    float v, g, menor, x;
    menor = 1e10;
    for(int i=0; i<n; i++){
        cin >> v >> g;
        x = (1000*v)/g;
        if(x < menor) menor=x;
    }
    cout << fixed << setprecision(2) << menor << endl;
    return 0;
}