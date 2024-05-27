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
    int c, l, m, n; cin >> l >> c >> m >> n;
    vector<vector<int>> v (l+10,vector<int>(c+10));
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++){
            int a; cin >> a;
            v[i][j]=a;
        }
    int maior=-1;
    for(int i=0; i<l;){
        for(int j=0; j<c;){
            int soma = 0;
            for(int k=0; k<m; k++){
                for(int l=0;l<n; l++){
                    soma += v[i+k][j+l];
                }
            }
            maior = max(maior,soma);
            j += n;
        }
        i += m;
    }
    cout << maior%10000007 << endl;
    return 0;
}