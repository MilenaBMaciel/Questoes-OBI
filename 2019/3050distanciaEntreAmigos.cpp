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
    ll n; cin >> n;
    vector<ll> a;
    ll b; cin >> b;
    ll dist=0, imax=0;
    a.pb(b);
    for(ll i=1; i<n;i++){
        cin >> b;
        a.pb(b);
        if((a[0]+i+a[i])>dist){
            imax = i;
            dist = a[0]+i+a[i];
        }
    }
    for(ll i=0; i<n; i++) if(i!=imax){
        dist = max(dist,(a[imax]+(abs(imax-i)+a[i])));
    }
    cout << dist << endl;


    return 0;
}