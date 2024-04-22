#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define pLL pair<LL,LL>
#define dgb(x) cout << #x << " = " << x << endl 

int main(){ _ 

    LL n; cin >> n;
    vector<pLL> h;
    for(int i=0; i<n; i++){
        LL a, b; cin >> a >> b;
        h.PB(MP(b,a));
    }
    sort(h.begin(), h.end());
    LL cont=0;
    LL ult=0;
    for(int i=0; i<n; i++){
        if(h[i].S >= ult){
            cont++;
            ult = h[i].F;
        } 
    }
    cout << cont << endl;
    return 0;
}