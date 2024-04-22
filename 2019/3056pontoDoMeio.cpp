#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back
#define ll long long

#define dgb(x) cout << #x << " = " << x << endl 


typedef pair<int, int> ii;

int main(){ _
    int n; cin >> n;
    long double lado=2;
    for(int i=0; i<n; i++){
        lado+=lado-1;
    }
    cout << fixed << setprecision(0) << pow(lado,2) << endl;
    return 0;
}