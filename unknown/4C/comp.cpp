#include <bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    int j = 0;
    cin >> n;
    string str;
    string temp;
    map<string, int> db;

    for (int i = 0; i < n; ++i){
        cin >> str;
        if (db[str] == 0){
            cout << "OK" << '\n';
        }else{
            
            cout << str << db[str] << '\n';
        }
        db[str]++;
    }
    

}

