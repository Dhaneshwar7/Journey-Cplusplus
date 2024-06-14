#include <iostream>
using namespace std;
  
 
int main(){
    int N;
    cout<< "Enter a Number for Solid Square Pattern"<< endl;
    cin>>N;

    for(int i=1; i<=N;i++){
        for(int j=1;j<=N;j++){
            cout<<"* ";
        }
        cout<< endl;

    }
    return 0 ;
  
 }