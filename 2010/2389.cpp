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
    LL n; cin >> n;
    LL n1, n2;
    LL cont=0;
    LL lim = sqrt(n/2); //teorema
    for(int i=1; i<=lim; i++){  
        n1 = 3*i+2; // primeiro bloco tem 5 e vai acrescentando de 3 em 3 para fazer uma linha
        n2 = n - n1; //verifica quantas árvores faltam para ser plantanda

        n1 -= (i+1); // retira os elementos repetidos
        if(n2%n1 == 0) cont++;
    }
    cout << cont << endl;
    return 0;
}