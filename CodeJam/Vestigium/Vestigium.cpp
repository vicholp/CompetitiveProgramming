#include <bits/stdc++.h>

using namespace std;


int t = 0;

int main(){

	cin >> t;
	for (int i = 0; i < t; ++i){

		int n = 0;
		cin >> n;
		bool maCol[n][n];
		bool maRow[n][n];
		int colRep[n];
		int filRep[n];
		int countCol = 0;
		int countFil = 0;


		for (int j = 0; j < n; ++j)
		{
			colRep[j] = false;
		}
		for (int j = 0; j < n; ++j)
		{
			filRep[j] = false;
		}
		int trace = 0;
		for (int j = 0; j < n; ++j){
			for (int k = 0; k < n; ++k){
				maCol[j][k]= false;
				maRow[j][k]= false;
			}
		}
		

		//j fila
		//k columna
		for (int j = 0; j < n; ++j){
			for (int k = 0; k < n; ++k)
			{
				int q = 0;

				cin >> q;

				if (j == k){
					trace += q;
				}

				if(!maCol[j][q-1]){
					maCol[j][q-1] = true;
				}else{
					if (!colRep[j]){
						colRep[j] = true;
						countCol++;
					}
				}
				if(!maRow[k][q-1]){
					maRow[k][q-1] = true;
				}else{
					if (!filRep[k]){
						filRep[k] = true;
						countFil++;
					}
				}


				
			}
		}

		//Case #1: 4 0 0
		cout << "Case #" << i+1 << ": " << trace << " " << countCol << " " << countFil << endl;

	}

	return 0;

}