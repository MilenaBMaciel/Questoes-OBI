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
    double l, a, p, r; cin >> l >> a >> p >> r;
    if(sqrt(pow(l,2)+pow(a,2)+pow(p,2)) <= 2*r) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}