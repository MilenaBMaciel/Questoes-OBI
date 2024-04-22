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
    LL a, n; cin >> a >> n;
    LL cont =0;
    for(int i=0; i<n; i++){
        LL b; cin >> b;
        if(b*a >= 40000000) cont++;
    }
    cout << cont << endl;
    return 0;
}