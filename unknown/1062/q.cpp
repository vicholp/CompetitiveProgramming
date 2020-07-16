#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  int size;
  int xd;
  bool state=true;

  while(cin>>xd){
    if(xd==0) {
      cout<<endl;
      state=true;
    }else{
      int aux=0;
      vector<int> input;
      if(state){
        size=xd;
        state=false;
      }

      else{
        aux=1;
        input.push_back(xd);
      }

      //cout<<size<<endl;
      for(int i=0;i<size-aux;i++){
        int h;
        cin>>h;  
        input.push_back(h);
      }

      //for(int i=0;i<input.size();i++) cout<<input[i]<<"\t";

      //cout<<endl;
      vector<int> stak;
      vector<int> ans;
      int ind=0;

        for(int i=1;i<=size;i++){
          stak.push_back(i);
          
          //cout<<stak[stak.size()-1]<<" "<<input[ind]<<endl;
          if(stak[stak.size()-1]==input[ind]){
            stak.pop_back();
            ans.push_back(i);
            ind++;
            while(stak[stak.size()-1]==input[ind]){
              ans.push_back(stak[stak.size()-1]);
              stak.pop_back();
              ind++;
              }
          }
          else{
            //cout<<"dentro del stak"<<endl;
            for(int j=i;j<=input.size();j++){
              //cout<<j<<"\t";
              stak.push_back(j);
              i=j;
              

              if(stak[stak.size()-1] ==input[ind]){
                while(stak[stak.size()-1]==input[ind]){
                  ans.push_back(stak[stak.size()-1]);
                  stak.pop_back();
                  ind++;
                }
                //cout<<"asd "<<stak[stak.size()-1]<<endl;
                break;
              }
            }
            //cout<<endl<<endl;
          }
        }
      
      if(ans.size()<size){
        cout<<"No\n";
      }else{
        cout<<"Yes\n";
      }
    }
    
  }



    return 0;
}