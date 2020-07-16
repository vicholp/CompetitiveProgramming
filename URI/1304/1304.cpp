#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double segu(double a, double b, double c);


int main(){

    double vel, tiempo, recorrido = 0.0;
    vel = 0.0;
    tiempo = 0.0;
    recorrido = 0.0;
    

    string q;
    while(getline(cin ,q)){


        double a, b, c = 0;
        double d = 0;

        //cout << q.length() << " -- "<< q << endl;
        
        if(q.length() == 8){ //query
            //cout << "query" << endl;
           //cout << q.substr(0,2) << q.substr(3,2) << q.substr(6,2);
           a = double(stoi(q.substr(0,2)));
           b = double(stoi(q.substr(3,2)));
           c = double(stoi(q.substr(6,2)));

           double seg = segu(a,b,c)-1;
           cout << fixed << setprecision(2);
           cout << q.substr(0,2) << ":" << q.substr(3,2) << ":" << q.substr(6,2)  << " " << (((segu(a,b,c)-1)-tiempo)*vel)+recorrido << " km"<< endl;
          


           

        }else{
            //cout << "refresh" << endl;
            //cout << q.substr(0,2) << q.substr(3,2) << q.substr(6,2);
            a = double(stoi(q.substr(0,2)));
            b = double(stoi(q.substr(3,2)));
            c = double(stoi(q.substr(6,2)));
            d = double(stoi(q.substr(9)));
            
            tiempo = (segu(a,b,c)-1)-tiempo;
            recorrido = tiempo*vel+recorrido;
            vel = d/3600.0;
            
            

            //cout << "vel: " << vel << " tiempo: " << tiempo << " rec: " << recorrido << endl;
            tiempo = segu(a,b,c)-1;

        }


        //cout << endl;
    }
    
    
}
double segu(double a, double b, double c){
    double t = (a*3600)+(b*60)+c;
    return double(t);

}
        
	

