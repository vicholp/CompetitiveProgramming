#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main(){
    int n, m = 0;
    cin >> n >> m;
    int a[m];
    int z[m];
    for (int i = 0; i < m; ++i){
        cin >> a[i];
        z[i] = a[i];

    }

    //cout << n << " " << m << endl;

    sort(a,a+m, greater<int>());

    sort(z,z+m, greater<int>());

    /*
    for (int i = 0; i < m; ++i){
        cout << z[i] << " ";
    }
    */
    //cout << endl;
    int i = 0;
    int max = 0;
    int min = 0;

    int c = n;

    while(c>0){
        if (z[i-1] == z[i] && i != 0){
            i--;
            continue;
        }
        //cout << c << " " << i << endl;
        max += z[i];
        z[i]--;
        c--;
        //cout << "MAX: " << max << endl;

        //for (int i = 0; i < m; ++i){
            //cout << z[i] << " ";
        //}//cout << endl << endl;

        if(z[i+1] >= z[i] && i != m-1){
            i++;

        } 
        if(z[i-1] >= z[i] && i != 0){
            i--;
            
            
        } 
        

           
           


        


    }
    

    //cout << "MIN-----------" << endl;
    i = m-1;

    while(n>0){
        //cout << n << endl;
        min += a[i];
        a[i]--;
        n--;

        if (a[i] == 0){
            i--;
        }

        

        //for (int i = 0; i < m; ++i){
       //     cout << a[i] << " ";
        //}cout << endl << endl;



    }
    cout << max << " " << min << endl;

}

