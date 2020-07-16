#include <bits/stdc++.h>
using namespace std;


int main(){
    int a = 0;
    int s , n = 0;
    s = 0;

    vector<string> nombres;

    cin >> a;

    for (int i = 0; i < a; ++i){
    	getchar();
    	char b = getchar();
    	
    	//cout << b;
    	if(b == '+'){
    		s++;
    	}else{
    		n++;
    	}
    	string c;
    	cin >> c;
    	nombres.push_back(c);


    }
    sort(nombres.begin(), nombres.end());

    for (int i = 0; i < nombres.size(); ++i)
    {
    	cout << nombres[i] << endl;
    }
    cout << "Se comportaram: " << s << " | " << "Nao se comportaram: " << n << endl;
 
    
}

