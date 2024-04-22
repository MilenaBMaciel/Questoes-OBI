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

int main(){ _ 
    lli n; cin >>n;
    lli result;
    result = ((n+1)*(n+2))/2;
    cout << result << endl;
    return 0;
}