#include <iostream>
using namespace std;

int main(){
    // int score;
    // cout << "Enter Score" <<endl;
    // cin>> score;
    // if(score <300){
    //     cout << "INdia Wins" <<endl;
    // }
    // else{
    // cout<< "Austrialia Wins " <<endl;
    // }

    // Print 1-10 numbers
    for (int i=1; i<=10;i++){
        cout << "This is Number"<< i<<endl;
    }

    //Print Even Number 2,4,6
    for(int i=1;i<20 ;i++){
        cout<< "Even number "<<i << endl;
    }
    
    //Print odd Number 1,3,5
    for(int i=1;i<20 ; i=i+2){
        cout << "Odd number "<< i<<endl;
    }
    //Print 2s table 
    for(int i=1; i<=20; i++){
        cout<< "2 * "<<i << "=" <<i*2 <<endl;
    }
     //Print 3s table 
    for(int i=1; i<=20; i++){
        cout<< "3 * "<<i << "=" <<i*3 <<endl;
    }

    //Divided by 2 and print 
    for(int i =200 ; i>0; i=i/2 ){
        cout << i<< "/2 = "<< i <<endl;
    }

    //print 5 - 25 
    for(int i =5 ; (i>=0 && i<=25);i++ ){
        cout << i <<endl;
    } 
    
    // we also can write like this for loop
    //table of 4
    int i=1;
    for( ; ; ){
        if(i<=40){
            cout <<"4 * "<<i<< "="<<i*4 <<endl;
            i=i+1;
        }
    }

    // int n;
    // if(cin>>n){
    //     cout<< "oke printed" << n <<endl;
    // }

}