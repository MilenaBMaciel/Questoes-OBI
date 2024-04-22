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
    vector<int> v;
    int n, e, f; cin >> n >> e >> f;
    int cont=0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]>=e && v[i]+v[j]<=f) cont++;
            else if(v[i]+v[j]>f)break;
        }
    }
    cout << cont << endl;

    return 0;
}