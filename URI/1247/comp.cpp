#include <bits/stdc++.h>
using namespace std;


int main(){
    int p, m = 0;
    cin >> p >> m;
    int r = p;
    for (int i = 0; i < p; ++i){
        int q = 0;
        bool b = true;
        for (int j = 0; j < m; ++j){
            cin >> q;
            if(q == 0){ 
                b = false;
            }
        }
        
        if (!b){ r--; }
    }
    cout << r << endl;
    
 
    
}

