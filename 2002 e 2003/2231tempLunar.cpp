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

    LL n, m; cin >> n >> m;
    int cont=0;
    while(n!=0 && m!=0){
        cont++;
        vector<LL> v;
        LL in=0;
        LL maior = -LINF, menor = LINF;

        for(int i=0; i<n; i++){
            LL a; cin >> a;
            v.PB(a);
            if(i>=m-1){
                LL media = 0;
                for(int j=in; j<(m+in); j++){
                    media += v[j];
                }
                media = media/m;
                maior = max(media, maior);
                menor = min(media, menor);
                in ++;
            }
        }
        cout << "Teste " << cont << endl;
        cout << menor << " " << maior << endl;
        cout << endl;

        cin >> n >> m;
    }

    return 0;
}