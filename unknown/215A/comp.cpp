#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define q cout<<"CHECK"<<endl;


int main(){
    int a, b;
    cin >> a;
    int x[a];
    for (int i = 0; i < a; ++i){
        cin >> x[i];
    }
    cin >> b;
    int y[b];
    for (int i = 0; i < b; ++i){
        cin >> y[i];
    }
    vector<int> list;
    for (int i = 0; i < a; ++i){
        for (int j = 0; j < b; ++j){
            if(y[j]%x[i] == 0) list.push_back(y[j]/x[i]); 
        }
    }
    //for (int i = 0; i < list.size(); ++i){

        //cout << list[i] << " ";
    //}

    sort(list.begin(), list.end(),greater<int>());
    //cout << endl;

    //for (int i = 0; i < list.size(); ++i){

        //cout << list[i] << " ";
    //}

    int i = 1;
    int c = 1;
    //cout << endl;


    for (int i = 1; i < list.size(); ++i){
        if(list[i] != list[i-1]){
            cout << c << endl;
            return 0;
        }else{
            c++;
        }
    }
    cout << c << endl;


}

