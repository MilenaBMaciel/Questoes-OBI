#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back
#define ll long long
#define lli long long int

#define dgb(x) cout << #x << " = " << x << endl 


typedef pair<int, int> ii;
lli transf(lli a){
    lli cont=0;
    lli result = a;
    while(a>0){
        if(a%10==7){
            result-=7*pow(10,cont);
        }
        cont++;
        a = a/10;
    }
    return result;
}
int main(){ _ 
    lli a, b;
    char x; cin >> a >> x >> b;
    a = transf(a);
    b = transf(b);
    if(x=='+') cout << transf(a+b) << endl;
    else cout << transf(a*b) << endl;

    return 0;
}