#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define q cout<<"CHECK"<<endl;


int main(){
    long long y, div, suma;
    cin >> y >> div >> suma;

    vector<long long> list;


    if (y>=suma || div > suma){
    	cout << "-1" << endl;
    	return 0;
    }
    long long a = (y-(y%div)+div); //primer divisor
    list.push_back(a-y);
    long long i = a/div +1;
    //cout << "primer divisor: " << a << " primer factor: " << i<<endl;

    if (a>suma){
    	cout << "-1" << endl;
    	return 0;
    }

    long long c = a;
    while(div*i <= suma){
    	//cout << "i: " << i << " a*i " << div*i << endl;
    	
    	list.push_back(div*i-y);
    	i++;
    }


    

    for (long long i = 0; i < list.size(); ++i){
    	cout << list[i] << " ";
    }

}

