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
    int v,p; cin >> v >> p;
    if(v%p==0){
        for(int i=0; i<p; i++) cout << v/p << endl;
    }
    else{
        int r = (int)v/p;
        int i;
        for(i=0; i<(v%p); i++) cout << r+1 << endl;
        for(; i<p; i++) cout << r << endl;
    }


    return 0;
}