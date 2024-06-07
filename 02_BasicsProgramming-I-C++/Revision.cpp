#include <iostream>
using namespace std;


int main(){
    //Printing numbers from 1 to n
    int n;
    cout<< "enter a number";
    cin>> n;
    // for(int i=1;i<=n;i++){
    //     cout << i << endl;
    // }


    //Printing a table of N Element
    // for (int i=1;i<=10;i=i+1){
    //     cout << n*i <<endl;
    // }

    // Check prime number
    for (int i=2; i<=n;i++){
        // Corner case
    if (n <= 1)
        return false;

        if(n%i==0){
            cout << "Not a Prime Number";
            return 0;
        }
        cout << " This is Prime Number" << endl;
        return 0;
    }
}