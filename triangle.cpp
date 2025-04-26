#include <iostream>

using namespace std;

int main()
{
    for(int row = 1; row <= 7 ; row++)
    {
        for(int col = 1; col <= 7; col++)
        {
            if ((row == 4) or (row == 3 && (col == 2 or col == 6)) or (row == 1 && col  == 4) or (row == 2 && (col == 3 or col == 5)))
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}