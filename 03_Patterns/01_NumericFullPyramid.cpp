#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Rows number";
    cin>> n;

    for( int row=0; row<n;row=row+1){

        //row + 1 elements print karne wale  hai
        // int start = row+1;
        for (int col=0; col<row+1; col=col+1){
            //1st way
            // cout << start << " ";
            // start = start +1 ;
            
            // 2way another formula
            cout << row  +col +1 << " ";

        }
        cout<<endl;
    }

}