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

    int i = 1;
    int n; cin >> n;
    while(n!=0){

        cout << "Teste " << i << endl;

        cout << (int)pow(2,n)-1 << endl;
        
        cout << endl;

        cin >> n;
        i++;
    }

    return 0;
}