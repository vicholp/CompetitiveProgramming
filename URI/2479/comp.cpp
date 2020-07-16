#include <bits/stdc++.h>
using namespace std;


int main(){
    int a, b, c = 0;

    cin >> a >> b >> c;

    int d, e, f = 0;

    d = b*1+c*2;

    e = a*1+c*1;

    f = a*2+b*1;
    //cout << d << e << f;
    cout << min(min(d,e),f)*2 << endl;
 
    
}

