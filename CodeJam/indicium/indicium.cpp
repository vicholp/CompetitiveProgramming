#include <bits/stdc++.h>

using namespace std;

int solve(int x, int y,vector<vector<int> > & avCol, vector<vector<int> > & avFil, int n, vector<vector<int> > & mat);

int main(){
	int testcases = 0;
	int n = 0;
	int k = 0;

	cin >> testcases;

	for (int loop = 0; loop < testcases; ++loop){
		cin >> n >> k;

		//int matrix[n][n];

		vector<vector<int> > matrix(n,vector<int>(n,0));

		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				matrix[i][j] = 0;
			}
			//cout << endl;
		}
		
		//int availCol[n][n];
		//int availFil[n][n];

		vector<vector<int> > availCol(n,vector<int>(n,0));
		vector<vector<int> > availFil(n,vector<int>(n,0));
		
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				availCol[i][j] = 0;
				availFil[i][j] = 0;
			}
		}
		
		//generar sumandos
		int suma = 0;
		int resto = 0;
		int div = 0;
		int por = 0;
		int count = 0;
		div = k;
		por = n;
		resto = div%por;
		//cout << "por: " << por << endl;
		//cout << "div: " << div << endl;
		//cout << "resto: " << resto << endl;
		if (resto == 0){
			for (int i = 0; i < por; ++i){
				matrix[i][i] = (int)(div/por);
				availCol[i][(int)(div/por)-1] = 1;
				availFil[i][(int)(div/por)-1] = 1;
				count++;
			}	
		}else{
			for (int i = 0; i < (int)k/n; ++i){
				//cout << "k/n: " << (int)k/n << endl;
				matrix[i][i] = n;
				availCol[i][n-1] = 1;
				availFil[i][n-1] = 1;
				count++;
			}
		}
		/*
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				//cout << matrix[i][j] << " ";
			}
			//cout << endl; //rpint
		}
		*/

		while(resto!=0 && div >= por){
			por = n-count;
			div = resto;
			resto = div%por;
			//cout << "por: " << por << endl;
			//cout << "div: " << div << endl;
			//cout << "resto: " << resto << endl;
			if (resto == 0){
				int q = count;
				for (int i = 0+q; i < por+q; ++i){
					matrix[i][i] = (int)(div/por);
					availCol[i][(int)(div/por)-1] = 1;
					availFil[i][(int)(div/por)-1] = 1;
					count++;
				}
			
			}else{
				int q = count;
				for (int i = 0+q; i < (int)(div/por)+q; ++i){
					//cout << "k/n: " << (int)(div/por) << endl;
					matrix[i][i] = por;
					availCol[i][por-1] = 1;
					availFil[i][por-1] = 1;
					count++;
				}
			}

			/*
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout << matrix[i][j] << " ";
				}
				cout << endl;
			}
			*/
		} 

		if(div<por && resto != 0){

			//cout << "entre" << endl;
			matrix[count][count] = resto;
			availCol[count][resto-1] = 1;
			availFil[count][resto-1] = 1;
			resto = 0;
			
			count++;

			while(count != n){
				//cout << "entre" << endl;
				for (int i = 0; i < n-count; ++i){
					if (matrix[i][i]>1){
						availCol[i][matrix[i][i]-1] = 0;
						availFil[i][matrix[i][i]-1] = 0;
						matrix[i][i]--;
						matrix[count][count]++;

						availCol[i][matrix[i][i]-1] = 1;
						availFil[i][matrix[i][i]-1] = 1;
						
						availCol[count][0] = 1;
						availFil[count][0] = 1;
						count++;
						i=0;
						/*
						for (int i = 0; i < n; ++i){
							for (int j = 0; j < n; ++j){
								cout << matrix[i][j] << " ";
							}
							cout << endl; //rpint
						}
						cout << endl;
						for (int i = 0; i < n; ++i){
							for (int j = 0; j < n; ++j){
								cout << availCol[i][j] << ' ' ;
							}
							cout << endl;
						}
						cout << endl;
						for (int i = 0; i < n; ++i){
							for (int j = 0; j < n; ++j){
								cout << availFil[i][j] << ' ' ;
							}
							cout << endl;
						}
						*/
						

					}
				}
			}
		}

/*
		
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << matrix[i][j] << " ";
			}
			cout << endl; //rpint
		}

		

		cout << endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << availCol[i][j] << ' ' ;
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << availFil[i][j] << ' ' ;
			}
			cout << endl;
		}

		
*/

		cout << "Case #" << loop+1 << ": ";


		if (solve(0, 0, availCol, availFil, n, matrix) == 0 ){
			cout << "IMPOSSIBLE" << endl;
		}

		//cout << "----------OUT-----------" << endl;

		

	}

	return 0;
	
}

int solve(int x, int y,vector<vector<int> > & avCol, vector<vector<int> > & avFil, int n, vector<vector<int> > & mat) {
	int ax =0;
	int ay = 0;
	/*
	cout << endl << "--------" << endl << "DISPONIBLES " << endl;
	cout << "avCol: " << endl;
	
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << avCol[i][j] << ' ' ;
			}
			cout << endl;
		}
		cout << endl;
		cout << "avFil: " << endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << avFil[i][j] << ' ' ;
			}
			cout << endl;
		} 
	
	//cout << endl;
	*/
	//cout << "X: " << x << " Y: " << y <<  endl;
	if (mat[x][y] != 0) //casilla ya llenada
	{
		//cout << "SALTAR" << endl;
		if (y != n-1)
		{
			y++;
		}else{
			x++;
			y = 0;
		}
		//cout << "X: " << x << " Y: " << y << endl;
	}
	if(x==n && y==0) {
		//cout << "SOLUCION ENCONTRADAAAAA" << endl;
		cout << "POSSIBLE" << endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				if (j < n-1){
					cout << mat[i][j] << " ";
				}else{
					cout << mat[i][j];
				}
				
			}
			cout << endl; //rpint
		}
		return 1;
	}
	

	ax = x;
	ay = y;
	for (int i = 1; i <= n; ++i)
	{
		x = ax;
		y = ay;
		if (avCol[x][i-1] == 0 && avFil[y][i-1] == 0)
		{
			//cout << i << " SIRVE" << endl;
			avCol[x][i-1] = 1;
			avFil[y][i-1] = 1;
			mat[x][y] = i;

			if (y != n-1)
			{
				y++;
			}else{
				x++;
				y = 0;
			}
			/*
			for (int i = 0; i < n; ++i){
				for (int j = 0; j < n; ++j){
					//cout << mat[i][j] << " ";
				}
				//cout << endl; //rpint
			}
			*/
			if (solve(x,y, avCol, avFil, n, mat)){

				return 1;
			}else{

				avCol[ax][i-1] = 0;
				avFil[ay][i-1] = 0;
				mat[ax][ay] = 0;

				//cout << "VUELTA A: " << endl;
				//cout << "X: " << ax << " Y: " << ay << endl;
			}
		}else{

			//cout << i << " NO SIRVE" << endl;

		}
	}
	//cout << "POR ACA NO ES" << endl;
	return 0;

   

} 