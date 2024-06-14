#include <iostream>
using namespace std;
 

 int main(){
    int a,b,c;
    cout<< "Enter First Number"<<endl;
    cin>>a;
      cout<< "Enter Second Number"<<endl;
    cin>>b;
      cout<< "Enter Third Number"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
             cout<< "First number "<<a<<" Max Number"<<endl;
            return 0;
        }
          cout<< "Third number "<<c<<" Max Number"<<endl;
            return 0;
    }
    else if(b>c){
          cout<< "Second number "<<b<<" Max Number"<<endl;
            return 0;
    }
    else{
         cout<< "Third number "<<c<<" Max Number"<<endl;
            return 0;
    }



 }