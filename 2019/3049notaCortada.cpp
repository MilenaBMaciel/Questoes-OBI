#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define f first
#define s second
#define pb push_back

#define dgb(x) cout << #x << " = " << x << endl 


typedef pair<int, int> ii;

int main(){ _ 
    float b, t; cin >> b >> t;
    float b2=160-b,t2=160-t;
    float a1,a2;

    a1 = ((b+t)*70)/2;
    a2 = ((b2+t2)*70)/2;
    
    if(a1>a2) cout << "1" << endl;
    else if(a1<a2) cout << "2" << endl;
    else cout << "0" << endl;

    return 0;
}