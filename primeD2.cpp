#include <iostream>

using namespace std;

void get_divisor(int n) 
{
    cout << " the divisors of the" << n << "are: " << endl;
    for (int i =1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    get_divisor(num);

    return 0;
}