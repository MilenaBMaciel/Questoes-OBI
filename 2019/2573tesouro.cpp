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
    double l, a, xA, ya, xB, yb; 
    cin >> l >> a >> xA >> ya >> xB >> yb;
    cout << fixed << setprecision(6);

    double xa = xA, xb = xB;

    double xm = (xa+xb)/2, ym = (ya+yb)/2;
    double a1, a2;
    if(xa == xb && ya == yb){
        cout << "0.500000 0.500000" << endl;
        return 0; 
    }
    else if(xa == xb){
        a1 = l*ym;
        a2 = (l*a) - a1;
        if(ya > yb) swap(a1, a2);
        cout << (a1)/(l*a) << " " << (a2)/(l*a) << endl;
        return 0;
    }
    else if(ya == yb){
        a1 = a * xm;
        a2 = (l*a) - a1;
        if(xa > xb) swap(a1, a2);
        cout << (a1)/(l*a) << " " << (a2)/(l*a) << endl;
        return 0;
    }
    if(xa == 0){
        swap(xa,xb);
        swap(ya,yb);
    } 

    //equação da reta que liga luan e larissa y = xm + n
    double coef = xb/xa;
    double n = (yb - ya*coef) / (1 - coef);
    double m = (ya - n)/xa;
    
    //usando a prop de que se duas retas são perpendiculares, m*m' = -1
    //achar a reta onde Luan e Larissa podem chegar ao mesmo tempo
    
    double m2 = -1/m;
    double n2 = ym - xm*m2;
    
    //encontrar os pontos extremos na piscina que dividem a área em que Luan e Larissa alcançam primeiro 
    double x1, x2, y1, y2;
    a1=-1; a2=-1;
    if(m2>0){
        y1=0;
        x1 = (y1 - n2)/m2;
        if(x1 < 0){
            x1 = 0;
            y1 = m2*x1 + n2;
        }
        y2 = a;
        x2 = (y2 - n2)/m2;
        if( x2 > l){
            x2 = l;
            y2 = m2*x2 + n2;
        }
        
        if(x1==0 && x2<l){
            a1 = (x2*(y2-y1))/2;
            a2 = (l*a) - a1;
        } 
        else if(x2==l && x1>0){
            a2 = ((l-x1) * y2)/2 ;
            a1 = (l*a) - a2;
        }
        else if((x2<l && x1>0)||(x2==l && x1==0 && y1==0 && y2==a)){
            a1 = (x1+x2)*y2/2;
            a2 = (l*a) - a1;
        }
        else if(x2==l && x1==0){
            a2 = (y1+y2)*x2/2;
            a1 = (l*a) - a2;
        }
    }

    else if(m2<0){

        y1 = a;
        x1 = (y1 - n2)/m2;
        if(x1 < 0){
            x1 = 0;
            y1 = m2*x1 + n2;
        }
        y2 = 0;
        x2 = (y2 - n2)/m2;
        if( x2 > l){
            x2 = l;
            y2 = m2*x2 + n2;
        }
        if(x1==0 && x2<l){
            a1 = (x2*y1)/2;
            a2 = (l*a) - a1;
        } 
        else if(x2==l && x1>0){
            a2 = ((l-x1) * (y1-y2))/2 ;
            a1 = (l*a) - a2;
        }
        else if((x2<l && x1>0)||(x2==l && x1==0 && y1==a && y2==0)){
            a1 = (x1+x2)*y1/2;
            a2 = (l*a) - a1;
        }
        else if(x2==l && x1==0){
            a1 = (y1+y2)*x2/2;
            a2 = (l*a) - a1;
        }
    }
    
    

    if(xA > xB) swap (a1, a2);
    cout << (a1)/(l*a) << " " << (a2)/(l*a) << endl;

    return 0;
}