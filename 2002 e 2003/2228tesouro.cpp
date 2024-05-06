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

int memo[103][5100];
vector<int> v;
int obj;
int dp(int idx, int val){
    
    if(val == 0) return INF;
    if(val < 0) return -INF;
    if(idx > (int)v.size()-1) return -INF;

    if(memo[idx][val] != -1) return memo[idx][val];

    int n1 = dp(idx+1, val-v[idx]);
    int n2 = dp(idx+1, val);
    
    
    return memo[idx][val] = max(n1,n2);
}

int main(){ _  

    int i = 0;
    while(1){
        i++;
        int x, y, n; cin >> x >> y >> n;
        if(x == 0 && y == 0 && n == 0) return 0;    
        
        v = vector<int>();
        
        int soma = 0;
        for(int i=0; i<n; i++){
            int a; cin >> a; 
            v.PB(a); soma += a;
        }
        cout << "Teste " << i << endl;
        if((soma+x+y)%2 != 0) cout << "N" << endl;
        else{
            memset(memo, -1, sizeof(memo));
            obj = (soma + x + y)/2 - x;
            
            int result = dp(0, obj);
            
            if(result > 0) cout << "S" << endl;
            else cout << "N" << endl;
            
        }
        cout << endl;
        
    }
    
    return 0;
}