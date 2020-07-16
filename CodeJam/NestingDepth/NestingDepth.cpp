#include <bits/stdc++.h>

using namespace std;

int cases = 0;
int main(){
	cin >> cases;
	for (int a = 0; a < cases; ++a){
		string num;
		cin >> num;
		int now = 0;
		cout << "Case #" << a+1 << ": ";
		for (int i = 0; i < num.length(); ++i){
			int n = num[i]-48;
			
			
			while(now!=n){
				if (now<n){
					cout << '(';
				now++;
				}
				if (now>n){
					cout << ')';
					now--;
				}

			}
			cout << n ;

			
		}
		while(now!=0){
				cout << ')';
				now--;


			}
		cout << endl;

	}




	return 0;
}
