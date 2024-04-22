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
    ll n, k; cin >> n >> k;
    vector<ll> vt(n);
    for(ll i=0; i<n; i++) cin >> vt[i];
    unordered_map <ll,ll> hist; //este map armazena quantas vezes os valores da soma de prefixos já aconteceram
    
    ll cont=0, soma=0;
    hist[0] = 1;

    for(ll i=0; i<n;i++){
        soma += vt[i]; //armazena a soma de todos os elementos passados do vetor inicial
        
        ll r = soma - k;  //calcula a diferença entre a soma e o valor desejado
        
        cont += hist[r]; //atualiza o contador com a recorrencia passada do valor encontrado de r

        hist[soma] += 1; //atualiza o map com a nova recorrencia do valor de soma
    }
    cout << cont << endl;
    return 0;
}