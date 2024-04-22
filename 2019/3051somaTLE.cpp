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
    //VOU TER QUE CONTAR OS ZEROS PARA EVITAR REPETIÇÕES
    ll n, k; cin >> n >> k;
    ll cont=0,soma=0,zero=0;
    bool fim=false, sim=false;
    vector<ll> x;
    for(ll i=0; i<n; i++){
        ll a; cin >> a;
        x.pb(a);
    }
    if(k==0){
        for(ll i=0; i<n; i++){
            if(x[i]==0){
                zero++;
            }
            else{
                for(ll j=zero; j>0; j--){
                    cont +=j;
                }
                zero=0;
            }
        }
        cont+=(zero*2)-1;
    }
    else for(ll i=0; i<n; i++){
        soma=0;
        if(x[i]==0){
            zero++;
        }
        else for(ll j=i; j<n; j++){
                if(soma+x[j]>k){
                    zero=0;
                    sim=false;
                    break;
                }
                else if(soma+x[j]<k) {
                    if(j==n-1) fim = true;
                    sim=false;
                    soma+=x[j];
                }
                else if(soma+x[j]==k){
                    cont++;
                    cont+=zero;
                    zero=0;
                    soma+=x[j];
                    sim = true;
                }
            }  
        if(fim)break;   
    }

    if(sim)cont+=zero;
    cout << cont << endl;
    return 0;
}