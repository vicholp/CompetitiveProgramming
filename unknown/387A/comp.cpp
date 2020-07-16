#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main(){
    string awake;
    string time;

    cin >> awake >> time;

    //cout << awake << " " << time << endl;

    int hawake = (awake[0]-48)*10 +  awake[1]-48;
    int mawake = (awake[3]-48)*10 +  awake[4]-48;

    int htime = (time[0]-48)*10 +  time[1]-48;
    int mtime = (time[3]-48)*10 +  time[4]-48;

    //cout << hawake << ":" << mawake << endl;
    //cout << htime << ":" << mtime << endl;


    int hr = hawake - htime;
    int mr = mawake - mtime;

    
    if (mr < 0){
        hr--;
        mr = 60+mr;
    }
    if(hr < 0){
        hr = 24+hr;
    }



    if(hr>9 ){
        cout << hr;
    }else{
        cout << "0" << hr;
    }
    cout << ":";
    if(mr>9){
        cout << mr << endl;
    }else{
        cout << "0" << mr << endl;
    }
    






}

