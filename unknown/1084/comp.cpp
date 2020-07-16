#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

// URI
int main(){
    int a, b = 0;

    while (cin >> a >> b){
        if(a == 0 && b == 0){
            return 0;
        }

        string c;
        cin >> c;

        bool r; 
        for (int i = 0; i < b; ++i){ //Por cada digito a borrar
           cout << "A: " << c.length() << " - ";
            r = true;
            for (int j = 0 ; j < c.length()-1 && r; ++j){ //por cada digito
                cout << c[j]-48 <<  " " << c[j+1]-48 << "" ;

                if(c[j]-48 <= c[j+1]-48 ) {
                    
                    c.erase(j,1);
                    cout << " X ";
                    
                    r = false;
                    
               }
               cout << endl;
                
            }
            cout << c;
            cout << endl;

            
            
        }
        for (int i = 0; i < c.length(); ++i){
            cout << c[i];
        }
        cout << endl ;

    }
}

