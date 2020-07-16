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

        for (int i = 0; i < 10 && b > 0; ++i){ //por cada digito del 1 al 0

            for (int j = 0; j < c.length() && b > 0; ++j){
                //cout << " B: " << b  << " J: " << j  << " c: " << c.length()<< " - ";
                //cout << c[j]-48 <<  " " << i << " " ;
                if(c[j]-48 == i){
                    //cout << " x " ;
                    c.erase(j,1);
                    b--;
                    j--;
                }
                //cout << endl;
            }
            //cout << endl;
        }
        for (int i = 0; i < c.length(); ++i){
            cout << c[i];
        }
        cout << endl ;

    }
}

