#include <iostream>

using namespace std;

void max(int arr[3][3])
{

    int max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    int *address_max = &max;
    cout << "The maximum element in the array is: " << *address_max << endl;
    cout <<"address of the largest number is: " << address_max << endl;

    *address_max = 10;
    cout << "Changed value of the largest number in the array: " << *address_max << endl;
    cout <<"address of the largest number after change is: " << address_max << endl;

}

int main() 
{
    int arr1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *address = &arr1[1][2];
    cout<<*address<<" "<<endl;
    max(arr1);
}


