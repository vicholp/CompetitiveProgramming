#include <bits/stdc++.h>

using namespace std;

int t = 0;

int main(){

	cin >> t;


	for (int a = 0; a < t; ++a)
	{
		int time[1441];
		int time2[1441];


		int n = 0;
		cin >> n;
		int order[1441];
		int order2[1441];

		for (int i = 0; i < 1441; ++i){
			order[i] = -1;
			order2[i] = -1;
			time[i] = -1;
			time2[i] = -1;
		}
		
		bool flag = true;

		cout << "Case #" << a+1 << ": ";
		//cout << endl;
		
		char output[n];
		for (int i = 0; i < n; ++i){
			int x, y;
			cin >> x >> y;
			if (time[x] == -1){
				time[x] = y-1;
			}else{
				if (time2[x] == -1){
					time2[x] = y-1;
				}else{
					flag = false;
					
				}
			}
			
			if(order[x] == -1){
				order[x] = i;
			}else{
				order2[x] = i;
			}
			


		}


		int h = -1;
		int m = -1;
		
		for (int i = 0; i <= 1440; ++i){
			if (time[i] != -1 ){ //algo
				//cout << "algo " << i << " " << time[i]<< endl;
				if (time[i] >= i){//start

					if(h == -1){
						h = time[i];
						int pos = 0;
						if (order[i] != -1){
							pos = order[i];
							order[i] = -1;
						}else{
							pos = order2[i];
						}
						//cout << "pos C " << pos << endl;
						output[pos] = 'C';
						//cout << "1 " << i <<  " Cameron IN " << h <<endl;
					}else{
						if (m == -1){
							m = time[i];
							int pos = 0;
							if (order[i] != -1){
								pos = order[i];
								order[i] = -1;
							}else{
								pos = order2[i];	
							}
							//cout << "pos J  " << pos << endl;
							output[pos] = 'J';
							//cout << "1 " <<i << " JAMIE IN "  << m << endl;
						}else{
							flag = false;
							
						}
					}
				}
	
			}
			if (time2[i] != -1 ){ //algo
				if (time2[i] >= i){//start
					if(h == -1){
						h = time2[i];
						int pos = 0;
						if (order[i] != -1){
							pos = order[i];
							order[i] = -1;
						}else{
							pos = order2[i];
						}
						//cout << "pos C " << pos << endl;
						output[pos] = 'C';
						//cout << "2 " << i <<  " Cameron IN " << h <<endl;
					}else{
						if (m == -1){
							m = time2[i];
							int pos = 0;
							if (order[i] != -1){
								
								pos = order[i];
								order[i] = -1;
							}else{
								
								pos = order2[i];
							}
							//cout << "pos J  " << pos << endl;
							output[pos] = 'J';
							//cout << "2 " << i << " JAMIE IN "  << m << endl;
						}else{
							flag = false;
						}
					}
				}
	
			}
			if (i == h){ //ends
				h = -1;
				//cout << i <<" Cameron OUT " << h << endl;
			}
			if (i == m){
				m = -1;
			 	//cout << i <<" JAMIE OUT " << m << endl;
			}
		}
		if (flag){
			for (int i = 0; i < n; ++i){
				cout << output[i];
			}
		}else{
			cout << "IMPOSSIBLE";
		}
		
		cout << endl;

	}
	




	return 0;
}