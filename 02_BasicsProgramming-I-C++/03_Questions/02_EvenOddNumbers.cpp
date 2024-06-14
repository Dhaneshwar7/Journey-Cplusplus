#include <iostream>
using namespace std;


int main(){
    int N;
    char flag;
    cout<< "Enter a Last Number till you want Odd/Even"<<endl;
    cin>>N;
    cout<< "Enter 'E' for Even & 'O' for Odd "<<endl;
    cin>>flag;
    cout<< flag<<"ppp";
  
    if(flag=='e'){
        cout<< "Your Even Numbers are till last Number"<< N<<endl;
        for(int i=2; i<=N;i=i+2){
            cout<< i<<endl;
        }
        return 0;
    }
    else {
        cout<< "Your Odd Numbers are till last Number"<< N<<endl;
  for(int i=1; i<=N;i=i+2){
            cout<< i<<endl;
        }
        return 0;
    }

}