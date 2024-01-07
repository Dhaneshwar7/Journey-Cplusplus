#include <iostream>
using namespace std;

int main(){

    /* 1. Numeric Half Pyramid  */
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    cout << "------PATTERN 1 :- Numeric Half Pyramid ------" << endl;
    int numPyra;
    cout<< "Enter Rows for NUmbers"<<endl;
    cin>>numPyra ;
    for(int row =0;row<numPyra;row++){
        for(int col=0;col<row+1;col++){
            cout<< col+1;
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    /* 1. Inverted Numeric Half Pyramid  */
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    cout << "------PATTERN 1 :-Inverted Numeric Half Pyramid ------" << endl;
    int invNumHalfPyramid;
    cout<< "Enter Rows for NUmbers"<<endl;
    cin>>invNumHalfPyramid ;
    for(int row =0;row<invNumHalfPyramid;row++){
        for(int col=0;col<invNumHalfPyramid-row;col++){
            cout<< col+1;
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    /* 1. Full Pyramid  */
   //       *
   //     *   *
   //   *   *   *
   // *   *   *   *
    cout << "------PATTERN 1 :- Full Pyramid ------" << endl;
    int fullPyramid;
    cout<< "Enter Rows for NUmbers"<<endl;
    cin>>fullPyramid;
    for(int row =0;row<fullPyramid;row++){
        for(int space=0;space<fullPyramid-row;space++){
            cout<<" ";
        }
        for(int star=0;star<row+1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

       /* 1. Inverted Full Pyramid  */
   // *   *   *   *
   //   *   *   *
   //     *   *
   //       *
    cout << "------PATTERN 1 :- Inverted Full Pyramid ------" << endl;
    int invertedfullPyramid;
    cout<< "Enter Rows for NUmbers"<<endl;
    cin>>invertedfullPyramid;
    for(int row =0;row<invertedfullPyramid;row++){
        for(int space=0;space<row;space++){
            cout<<" ";
        }
        for(int star=0;star<invertedfullPyramid-row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}