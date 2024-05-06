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
    int k=0;
    while(1){
        
        k++;
        string a, b; cin >> a;
        if(a != "#") cin >> b; 
        else return 0;
        int s[a.size()+2][b.size()+2];
        for(int i=0; i<=(int)a.size(); i++){
            for(int j=0; j<=(int)b.size(); j++){
                if(i==0) s[i][j] = j;
                else if(j==0) s[i][j]=i;
                else if(a[i-1] == b[j-1])s[i][j] = 1 + s[i-1][j-1];
                else s[i][j] = 1+min(s[i-1][j], s[i][j-1]);

            }
        }
        //s[a.size()][b.size()] guarda o tamamanho da scs
        int i=a.size(), j=b.size();
        string resp;
        while(i>0 && j>0){
            if(a[i-1] == b[j-1]){
                resp.PB(a[i-1]);
                i--;j--;
            }
            else if(s[i][j]-1 == s[i][j-1]){
                resp.PB(b[j-1]);
                j--;
            }
            else{
                resp.PB(a[i-1]);
                i--;
            }
        }
        while(i>0){
            resp.PB(a[i-1]);
            i--;
        }
        while(j>0){
            resp.PB(b[j-1]);
            j--;
        }
        reverse(resp.begin(), resp.end());
        cout << "Teste " << k << endl;
        cout << resp << endl << endl;
    
    }

    return 0;
}