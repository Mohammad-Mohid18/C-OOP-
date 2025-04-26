#include <iostream>

using namespace std;

int main()
{
    int size = 7;
    for(int row = 1; row <= size ; row++)
    {
        for(int col = 1; col <= size; col++)
        {
            if((row == 4) or (col == 4) or (row == col || col == (size - row + 1)))
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