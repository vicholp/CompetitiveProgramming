#include <bits/stdc++.h>
using namespace std;

/*
-BFS en un grafo implicito.
-Calcula distancia minima segun movimientos 
desde un punto a otro en un tablero.

*/

int a, b, c, d, e;

bool limites (int x, int y, int tamX, int tamY) {
	return (x >= 0 && x <= tamX && y >= 0 && y <= tamY);
}

int bfs(int a1, int a2, int b1, int b2 ){
  //Movimientos de la pieza
  //           1   2   3   4   5   6   7   8
  int x[] = { -2, -2, -1,  1,  2,  2,  1, -1};
  int y[] = { -1,  1,  2,  2,  1, -1, -2, -2};  

  //Tamaño del tablero en numeros naturales
  int tamX = 100;
  int tamY = 100;

  //Par inicio y fin
  pair <int, int> a;
  pair <int, int> b;

  //Set
  a.first =  a1;
  b.first =  b1;
  a.second = a2;
  b.second = b2;

  //Debug
  //cout << "INICIO: " << a.first << " " << a.second << endl;
  //cout << "DESTIN: " <<  b.first << " " << b.second << endl;
  //cout << endl;

  //Se pasa a vector.
  std::vector<int> movX (x, x + sizeof(x) / sizeof(int) );
  std::vector<int> movY (y, y + sizeof(y) / sizeof(int) );

  //Tablero
  int tablero[tamX][tamY];

  //Valores iniciales
  for (int i = 0; i < tamX; i++) {
		for (int j = 0; j < tamY; j++) {
			tablero[i][j] = -1;
		}
	}

  //Print
  /*for(int j = 0; j < tamX; j++){
    for(int k = 0; k < tamY; k++){
      if(tablero[j][k] == -1){
        cout  << "x" << " ";
      }else{
        cout << "" << tablero[j][k] << " ";
      }
      
    }
    cout << endl;
  }
  cout << endl;*/

  //Cola
  queue< pair<int, int> > q;

  //Inicio
  q.push(a);

  //Inicio
  tablero[a.first][a.second] = 0;//punto de partida

  //Puntos iguales
  if (a == b){
    return 0;
  }

  //Mientras no ha llegado al destino
  while(!q.empty()){
    
    pair<int, int> actual = q.front(); //Par desde la cola
    q.pop();//Se elimina

    //Por cada mov
    for(int i = 0; i < movX.size(); i++){
      int nx = actual.first + movX[i]; //Coordenadas
      int ny = actual.second + movY[i];

      //Si esta dentro del tablero y no he pasado
      if(limites(nx,ny, tamX, tamY) && tablero[nx][ny] == -1){
        pair<int, int> nodoSiguiente = pair<int, int>(nx,ny); //Par siguiente

        tablero[nx][ny] = tablero[actual.first][actual.second] + 1; //Añade el peso al tablero

        //Si llegue
        if(nodoSiguiente == b){
          return tablero[nx][ny];
        }

        q.push(nodoSiguiente); //Agregar a la cola si no.
      }
      

    }

    /*for(int j = 0; j < tamX; j++){
        for(int k = 0; k < tamY; k++){
          if(tablero[j][k] == -1){
            cout  << "x" << " ";
          }else{
            cout << "" << tablero[j][k] << " ";
          }
          
        }
        cout << endl;
      }
      cout << endl;
    */
  }

  return 0;
  

}


int main() {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  

  cout << bfs(a, b, c ,d);
  

  


}