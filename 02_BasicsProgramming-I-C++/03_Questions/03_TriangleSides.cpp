#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter a length of sides of Triangle"<<endl;
    cout<< "Enter First Value"<<endl;
    cin >> a;
    cout<< "Enter Secon Value"<<endl;
    cin >> b;
    cout<< "Enter Third Value"<<endl;
    cin >> c;

    if((a+b )>c && (b+c)>a &&(c+a)>b){
        cout<< "This is can be Triangle"<<endl;
        return 0;
    }
    else{
        cout<< "This Sides can't make Triangle"<<endl;
return 0;
    }
}