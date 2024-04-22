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

int main(){ _

    int n; cin >> n;
    
    if(n<11) cout << "7" << endl;
    else if(n<31) cout << 7+ (n-10)*1 << endl;
    else if(n<101) cout << 7 + 20 + (n-30)*2 << endl;
    else cout << 7 + 20 + 140 + (n-100)*5 << endl; 
    
    return 0;
}