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
    int d, i, x, f; cin >> d >> i >> x >> f;
    
    if(d%2!=0){
        if(f%2!=0) i+=x;
    }
    else{
        if(f%2!=0) i-=x;
    }

    cout << i << endl;

    return 0;
}