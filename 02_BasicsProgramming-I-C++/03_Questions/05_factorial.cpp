#include <iostream>
using namespace std;
 

 int main(){
    int N,fact=1;
    cout << "Enter a NUmber "<< endl;
    cin>>N;
    for(int i=N; i>=1;i=i-1){
        fact = fact*i;
    }
    cout<< "Factorial of nUm " << N << " is "<< fact<<endl;
 }