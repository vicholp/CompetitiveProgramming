#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <double> distancias;

	long long n, k;

	cin >> n >> k;

	double x, y, z;
	double d ;

	for (long long i = 0; i < n; ++i){
		cin >> x >> y >> z;
		d = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		distancias.push_back(d);
	}

	sort( distancias.begin(), distancias.end());

  	printf("%.6f", distancias[k-1]);
  
	return 0;
}