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
    double m, p, j, x; cin >> m >> p >> j >> x;
    LL cont=0;
    m-=(m*p)/100;
    while(((m*j)/100) >= x){
        cont ++;
        m-=(m*p)/100;
    }

    cout << cont << endl;
    return 0;
}