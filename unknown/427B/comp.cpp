#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define q cout<<"CHECK"<<endl;
#define vez cout<<b<<endl;

int main(){
    int max, c, n = 0;
    cin >> n >> max >> c;
    long long pri[n];
    for (int i = 0; i < n; ++i){
        cin >> pri[i]; 

    }


    long long b = 0;
    long long contador = 0;
    long long g = 0;

    while(b != n){
        //cout << "b: "<<  b << endl;

        if(b == n-1){
            //cout << "LAST" << endl;
            if(pri[b] > max){
                if(g>=c) contador += g-(c-1);
                //cout << "No. Contador: " << contador << " G: " << g << endl; 
            }else{
                g++;
                if(g>=c) contador += g-(c-1);
                //cout << "+No. Contador: " << contador << " G: " << g << endl; 
            }
        }else{
            //cout << "pri[b] "<<  pri[b] << endl;

           if(pri[b] > max){

            if(g>=c) contador += g-(c-1);

            //cout << "No. Contador: " << contador << " G: " << g << endl; 
            g = 0;
            


            }else{
                g++;
            } 
        }
        
        

        b++;
        //cout << endl;
    }
    cout << contador << endl;

}

