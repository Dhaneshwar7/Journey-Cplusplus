#include <iostream>
using namespace std;

int main()
{

    /* 1. Solid RECTANGLE  */
    // ********
    // ********
    // ********

    cout << "------PATTERN :- Solid Rectangle------" << endl;
    // Outer loop for row observe
    for (int row = 0; row < 3; row++)
    {

        // Outer loop for Coloumn observe

        for (int col = 0; col < 8; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    /* --------------------------------------------- */

    /* 2.  Hollow Rectangle */
    // * * * * * * *
    // *           *
    // *           *
    // * * * * * * *
    cout << "------PATTERN :- Hollow Rectangle----" << endl;
    for (int row = 0; row <= 3; row++)
    {
        if (row == 0 || row == 3)
        {
            for (int i = 0; i < 7; i++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i = 0; i < 5; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    /* --------------------------------------------- */


    /* 3. Square Pattern  */
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    cout << "-----PATTERN :- Square Pattern------" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    /* --------------------------------------------- */


    // Now take input from user then print Hollow Pattern
    cout << "------PATTERN :- Hollow Pattern by User Input-----" << endl;
    int rowCount, colCount;
    cout << "Enter Row Number" << endl;
    cin >> rowCount;
    cout << "Enter Column Number" << endl;
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < colCount - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    /* --------------------------------------------- */


    /* Double border/ 2 outside line Hollow pattern : */
    /* Example */
    // * * * * * * * *
    // * * * * * * * *
    // * *         * *
    // * *         * *
    // * * * * * * * *
    // * * * * * * * *

    cout << "------PATTERN :- Double Border Hollow Pattern-----" << endl;
    int rowNum, colNum;
    cout << "Enter Number for Rows" << endl;
    cin >> rowNum;
    cout << "Enter Number for Columns" << endl;
    cin >> colNum;

    for (int ok = 0; ok< rowNum; ok++)
    {
        if(ok == 0 || ok == 1 || ok == rowNum-1||ok == rowNum-2)
        {
            for(int j = 0; j<colNum ; j++)
            {
                cout << "* ";
            }
        }
        else{
            cout << "* * ";
            for(int col =0; col< colNum-4;col++){
                cout << "  ";
            } 
            cout << "* * ";
        }
        cout<< endl;
    }
    cout<<endl;


    cout << "-------PATTERN :- Half Pyramid-----" << endl;
    int pyraRow;
    cout << "Enter Number for Rows" << endl;
    cin >> pyraRow;

    for (int row = 0; row< pyraRow; row++)
    {
        for(int col=0;col< row+1;col++){
            cout<<"* ";
        }
       cout<< endl;
    }
    cout<<endl;

    cout << "-------PATTERN :- Inverted Half Pyramid-----" << endl;
    int inverRow;
    cout << "Enter Number for Rows" << endl;
    cin >> inverRow;

    for (int row = 0;row<inverRow; row++)
    {
        for(int col=inverRow-row;col>0;col--){
            cout<<"* ";
        }
       cout<< endl;
    }
}