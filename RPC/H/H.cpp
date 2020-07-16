#include <bits/stdc++.h>

using namespace std;

int main(){

	string n;
  int a;

	cin >> n;

	int len = n.size();
  //cout << len << endl;
  
  if(len >= 3){
    a = (n[len-3]-48)*100+(n[len-2]-48)*10+(n[len-1]-48);
  }else{
    a = stoi(n);
  }
	
	//cout << a << endl;
  
  int suma = 0;
  
  while ((((a+suma)*((a+suma)*3+1))/2 ) % 4){
    suma++;
  }
  
  if(len >= 3){
    int indice = len-1;
    while(indice >= 0 && suma > 0){
      int tem = (n[indice]-48)+suma;
      n[indice] = (tem%10)+48;
      suma = tem/10;
      indice--;
    }
    //cout << suma << endl;
    if(indice ==-1 && suma > 0){
      cout << "1";
    }
    cout << n << endl;
  }else{
    cout << a+suma << endl;
  }
  
  
	return 0;
}