#include <bits/stdc++.h>

using namespace std;

#define q cout<<"CHECK"<<endl;




int main(){
    long long n = 0;

    cin >> n;

    long long a=n;
    long long b=n;
    long long query = 0;

    long long menor = 999999999;

    long long tower[n];

    for (long i = 0; i < n; ++i){
        cin >> query;
        
        tower[query-1] = query-1;

        cout << "query " << query << endl;
        int j = b-1;

        menor = min(query, menor);

        cout << "menor " <<menor << endl;

        

        while(tower[j] == j){
            cout  << " tower " << tower[j] << " - ";
            if(tower[j] == menor){
                cout << "QQQQQ ";

                for (int i = b; i >= menor; i--){
                    cout << i << " ";
                }
                b = query-1;
                cout << endl;
                continue;
                
            }
            a--;
            j--;

            
            
        }
        cout << endl;
        cout << endl;
    }



}

