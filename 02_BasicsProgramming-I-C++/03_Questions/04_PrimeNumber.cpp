#include <iostream>
using namespace std;

int main(){
    int N;
    cout<< "Enter a Number for Checking is Prime or Not"<<endl;
    cin>>N;
    for (int i=2; i*i<= N;i++){
        if(N %i ==0){
            cout<< "This is not Prime Number"<< endl;
            return 0;
        }
        else{
            cout<< "This "<< "Number "<< N << " is Prime Number "<<endl;
            return 0;
        }
    }
}