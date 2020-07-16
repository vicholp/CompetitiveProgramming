#include <bits/stdc++.h>

using namespace std;

#define q cout<<"CHECK"<<endl;


int main(){
    int red, blue = 0;
    cin >> red >> blue;

    int dif = (max(red, blue) - min(red, blue));
    
    int base = (min(red,blue)*2);
    bool mas;
    if(max(red, blue) == red){
        mas = true; // mas reds
    }else{
        mas = false;// mas blues 
    }

    bool par = !(base%2);

    int d = base%4;

    //cout << "dif " << dif << endl << "base " << base << endl << "d " << d<< endl << "mas " << mas << endl << "par " << par << endl;

    int pr = 0;
    int pb = 0;

    if(!par){
                pr = (base-1)/2;
                pb = pr; 
                //cout << "pr " << pr << " pb" << pb << endl;
            }else{
                pb = (base/2);
                pr = pb-1;
                //cout << "pr " << pr << " pb" << pb << endl;
            }

    switch(d){
        case 0://i
            
            pr += dif;

            //cout << "pr " << pr << " pb " << pb << endl;

            break;
        case 1://i

            pr += dif+1;

            //cout << "pr " << pr << " pb " << pb << endl;

            break;
        case 2://d

            pr += dif;


            //cout << "pr " << pr << " pb " << pb << endl;


            break;
        case 3://d

            pr += dif+1;

            

            //cout << "pr " << pr << " pb " << pb << endl;

            break;

    }
    cout << pr << " " << pb << endl;




}

