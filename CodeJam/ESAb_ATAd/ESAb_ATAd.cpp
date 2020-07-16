#include <bits/stdc++.h>

using namespace std;

int main(){
	int t = 0;
	int b = 0;
	cin >> t >> b;

	for (int i = 0; i < t; ++i)
	{
		char num[b];
		string output;
		for (int j = 0; j < b; ++j){
			cout << j+1 << endl << flush; 
			cin >> num[j];
		}
		for (int j = 0; j < b; ++j)
		{
			output.append(1, num[j]);
		}

		cout << output << endl << flush;
		
		char r;
		cin >> r;
		if (r == 'N'){
			return 0;
		}
	}





	return 0;
}