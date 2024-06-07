#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Rows number";
    cin>> n;

    //First Half Part 
    // for( int row=0; row<n;row=row+1){
    //     //row + 1 elements print karne wale  hai
    //     // int start = row+1;
    //     for (int col=0; col<row+1; col=col+1){
    //         //1st way
    //         // cout << start << " ";
    //         // start = start +1 ;
            
    //         // 2way another formula
    //         cout << row  +col +1 << " ";
    //     }
    //     cout<<endl;
    // } 

    // Full Pyramid part --
    for(int row =0; row <n ; row = row+1 ){
        //spaces
        for(int col=0; col< n-row-1;col=col+1){
        cout << " ";
        }

        //numbers
        for(int col=0; col< row+1; col=col+1){
            cout << row +col +1;
        }
        //reverse pyramid
        int start = 2*row;
        for(int col=0; col<row ;col=col+1){
            cout<< start;
            start =start -1;
        }
        cout << endl;

    }


    

}