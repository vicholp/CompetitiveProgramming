#include <bits/stdc++.h>
using namespace std;


int main(){
    string c;
    vector<long long> q(10,0);
    while (cin >> c){
        vector<long long> q(10,0);
        for (long long  i = 0; i < c.length(); ++i){
            cout << c[i] << " " ;
            int r = c[i];
            q[r]++;
        }
        cout << endl;
        for (int i = 0; i < q.size(); ++i){
            cout << q[i];
        }
        cout << endl;
        q.clear();
    }
    
 
    
}

