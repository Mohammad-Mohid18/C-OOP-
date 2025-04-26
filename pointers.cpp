#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *pA = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a through pointer: " << *pA << endl;
    cout << "Value of a through pointer: " << pA << endl;

    *pA = 10;
    cout << "Changed value of a through pointer: " << a << endl;

    int b = 15;
    int *pB = &b;
    cout << "Value of b: " << b << endl;

    *pB = *pA;
    cout << "Value of b after changing through pointer to a: " << b << endl;

    int *pC = pA;
    pC = pB;

    cout << "Value of pC after assigning pA to pC: " << *pC << endl;
    cout << "Value of pC through pB: " << pC << endl;

    *pC = 20;
    cout << "Changed value of a through pC: " << a << endl;
    cout << "Changed value of b through pC: " << b << endl;

    cout<< "Adrees of pC: " << &pC << endl;
    return 0;
}