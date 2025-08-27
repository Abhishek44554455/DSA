#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        // star//
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        // space//
        for (int col = 1; col <= 2 * 5 - 2 * row; col++)
        {
            cout << " ";
        }
        // star//
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;

       
}
 // niche wala portion
        for (int row = 1; row <= 4; row++)
        {
            // star//
            for (int col = 1; col <= 5-row; col++)
            {
                cout << "*";
            }
            // space//
            for (int col = 1; col <= 2 * row; col++)
            {
                cout << " ";
            }
            // star//
            for (int col = 1; col <= 5-row; col++)
            {
                cout << "*";
            }
            cout<<endl;
        }
    }

