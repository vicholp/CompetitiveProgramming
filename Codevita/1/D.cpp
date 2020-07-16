//2
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int tablero[9][9];
  
  cout << "Ingrese una lancha" << endl;
  
  int a,b,c,d;
  
  cin >> a >> b; 
  cin >> c >> d;
  
  while(abs(a-c) + abs(b-d) != 1){
  	cout << "Entrada invalida" << endl;
    cin >> a >> b; 
    cin >> c >> d; 
  }
  
  
  a--;
  b--;
  c--;
  d--;
  
  
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      tablero[i][j] = 0;
    }
  }
  
  tablero[a][b] = 1;
  tablero[c][d] = 1;
  
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      cout << tablero[i][j];
    }
    cout << endl;
  }
  
  
  
}