#include <bits/stdc++.h>
using namespace std;


int main(){
    double a , b, c = 0;
    int t; 
    //cin >> t;
    //for (int i = 0; i < t; ++i){
        cin >> a >> b >> c;

    
    double m = min(min(a, b), c);

    if(( m == a && m != b && m != c ) || ( m == b && m != a && m != c ) || ( m == c && m != a && m != b )){
        if(m == a){
            cout << "Octavio" << endl;
            return 0;
        }
        if(m == b){
            cout << "Bruno" << endl;
            return 0;
        }
        if(m == c){
            cout << "Ian" << endl;
            return 0;
        }
        
    }else{
        cout << "Empate" << endl;
    }
    //}
    

    
 
    
}

