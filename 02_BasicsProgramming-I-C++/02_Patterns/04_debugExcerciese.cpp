#include <iostream>
using namespace std;

int main()
{

    /* ----- Debug 1 ------ */
    // int i=0;
    // i=i+1;
    // cout<<i;
    // /*print i \*/  //i=i+1
    // cout<< ++i<<endl; // print 12

    /* ----- Debug 2 ------ */
    // short i=2300, j=4322;
    // cout<<"i+j="<<-(i+j)<<endl; // -6622

    /* ----- Debug 3 ------ */
    // float l, b;
    // cout<< "enter Length"<<endl;
    // cin>>l;
    // cout<< "enter Breadth" <<endl;
    // cin>>b;
    // float P = (l+b)*2;
    // cout<<"Perimeter of Rectangle "<< P<<endl;

    /* ----- Debug 4 ------ */
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /* ----- Debug 5 ------ */

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == i + 1 || j == n || i == 0)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}