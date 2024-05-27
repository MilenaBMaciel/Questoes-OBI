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
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        
        stack<char> p;
        char r = 'S';
        int tam = s.size();

        for(int j=0; j<tam; j++){
            if(s[j]=='{'||s[j]=='['||s[j]=='('){
                p.push(s[j]);
            }
            else if(!p.empty() && s[j]=='}' && p.top()=='{') p.pop();
            else if(!p.empty() && s[j]==']' && p.top()=='[') p.pop();
            else if(!p.empty() && s[j]==')' && p.top()=='(') p.pop();
            else{
                r = 'N';
                break;
            }
        }
        if(!p.empty()) r = 'N';
        cout << r << endl;
    }
    return 0;
}