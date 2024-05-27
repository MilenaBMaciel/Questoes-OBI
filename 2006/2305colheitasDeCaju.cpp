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
    int c, l, mm, n; cin >> l >> c >> mm >> n;
    vector<vector<int>> v(l+2, vector<int>(c+2));
    vector<vector<int>> m (l+2, vector<int>(c+2));
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++){
            int a; cin >> a;
            v[i][j]=a;
            if(i==0 && j==0){
                m[0][0] = a;
            }
            else if(i==0) m[0][j] = a+m[0][j-1];
            else if(j==0) m[i][0] = a+m[i-1][0];
            else{
                m[i][j] = a+m[i-1][j]+m[i][j-1]-m[i-1][j-1];
            }
        }
    int maior = -1;
    for(int i=mm-1; i<l; i++){
        for(int j=n-1; j<c; j++){
            int a;
            if(i==mm-1 && j==n-1) a=m[i][j];
            else if(i==mm-1) a = m[i][j]-m[i][j -n];
            else if(j == n-1) a = m[i][j]-m[i-mm][j];
            else a = m[i][j]-m[i-mm][j]-m[i][j -n]+m[i-mm][j-n];
            maior = max(a,maior);
        }
    }
    cout << maior << endl;
    return 0;
}