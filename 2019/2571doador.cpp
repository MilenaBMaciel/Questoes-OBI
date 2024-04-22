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
    
    p = p/100;

    double min = (100*x)/j;
    if((log(min/m))/(log(1-p))<0) cout << "0" << endl;
    else{
        unsigned long long cont = (log(min/m))/(log(1-p));
        cout << cont << endl;
    }
    
    return 0;
}