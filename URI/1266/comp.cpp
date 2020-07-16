#include <bits/stdc++.h>
using namespace std;

int a = 0;
int main(){

    while(cin >> a){
        //cout << a;
        if(a == 0) return 0; 
        int c, ceros, r  = 0;
        ceros = 0;
        bool t,v = false;
        t = false;
        v = false;

        for (int i = 0; i < a; ++i){
            

            cin >> c;
            if(c == 0){
                if(i == 0 ) t = true;
                if(i == a-1 ) v = true;

                ceros++;
                //cout << "ceros " << ceros << " ";
            }else{
                //cout << r << " ";
                r += floor((ceros/2));
                //cout << "r " << r << " ";
                ceros = 0;
            }
            

        }
        r += floor((ceros/2));
        //cout << "r " << r << " ";
        if(t && v) {r++; cout << "q";}
        cout << "TOTAL: " << r << endl;
    }
 
    
}

