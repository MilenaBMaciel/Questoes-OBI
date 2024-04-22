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
    LL n; cin >> n;

    LL t; cin >> t;
    LL ant = t;
    LL tot = 10;
    for(int i=1; i<n; i++){
        cin >> t;
        if(t-ant < 10) tot += (t-ant);
        else tot+=10;
        ant = t;
    } 
    cout << tot << endl;
    return 0;
}