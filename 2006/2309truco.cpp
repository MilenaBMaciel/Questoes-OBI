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
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 
    int c[10] = {3,2,1,13,11,12,7,6,5,4};
    LL n; cin >> n;
    LL af=0, bf=0;
    for(int i=0; i<n; i++){
        int ac=0, bc=0;
        int a[3], b[3];
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        for(int j=0; j<3; j++){
            if(a[j]==b[j]) ac++;
            else{
                for(int k=0; k<10; k++){
                    if(a[j] == c[k]){
                        ac++;
                        break;
                    }
                    if(b[j] == c[k]){
                        bc++;
                        break;
                    }
                }
            }
        }
        if(ac >= bc) af++;
        else bf ++;
    }
    cout << af << " " << bf << endl;
    return 0;
}