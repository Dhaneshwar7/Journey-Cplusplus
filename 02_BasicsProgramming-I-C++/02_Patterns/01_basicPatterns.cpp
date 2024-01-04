#include <iostream>
using namespace std;

int main()
{

    /* Solid RECTANGLE  */
    // ********
    // ********
    // ********

    cout << "PATTERN :- Solid Rectangle" << endl;
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

    /*  Hollow Rectangle */
    // * * * * * * *
    // *           *
    // *           *
    // * * * * * * *
    cout << "PATTERN :- Hollow Rectangle" << endl;
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

    /* Square Pattern  */
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    cout << "PATTERN :- Square Pattern" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Now take input from user then print Hollow Pattern

    cout << "Enter number of Row and Column for Hollow Pattern" << endl;
    cout << endl;
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

    /* Double border/ 2 outside line Hollow pattern : */
    /* Example */
    // * * * * * * * *
    // * * * * * * * *
    // * *         * *
    // * *         * *
    // * * * * * * * *
    // * * * * * * * *

    cout << "Enter a Number for Row & Column for double Border Hollow Pattern" << endl;
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
}