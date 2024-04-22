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

    int n; cin >> n;
    int cont = 0;
    
    for(int i=0; i<n; i++){
        int l, c; cin >> l >> c;
        if(l > c) cont += c;
    }
    
    cout << cont << endl;
    
    return 0;
}