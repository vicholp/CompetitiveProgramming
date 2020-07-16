#include <bits/stdc++.h>

using namespace std;

int main(){
	int frases = 0;
	cin >> frases;
	getchar();

	for (int a = 0; a < frases; ++a){
		vector < vector <string> > largos (50, vector <string> (0));
		vector<int> n (51, 0);
		string subfrase;
		int largo = 0;
		char c;
		c = getchar();

		while(c != '\n' && c != EOF){
			if(c != ' '){
				subfrase.append(1, c);
				largo++;
			}else{
				largos[largo].push_back(subfrase);
				
				n[largo]++;
				subfrase.erase();
				largo = 0;
			}
			c = getchar();
			if (c == '\n' || c == EOF){ //ultima iteracion
				largos[largo].push_back(subfrase);
				
				n[largo]++;
				subfrase.erase();
				largo = 0;
			}
		}
		bool flag = false; //si ya imprimi la primera palabra
		for (int i = 50; i > 0; i--){
			for (int j = 0; j < n[i]; ++j){		
				if (flag) cout << ' ';
				flag = true;		
				cout << largos[i][j];
			}
		}
		cout << endl;	
	
	}
}