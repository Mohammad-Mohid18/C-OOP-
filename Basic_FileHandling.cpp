#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ofstream OutPutFile;
    
    int num1,num2,num3;
    
    OutPutFile.open("marks.txt");

    cout<<"number 1:  ";
    cin>>num1;
    cout<<"number 2:  ";
    cin>>num2;
    cout<<"number 3:  ";
    cin>>num3;



    OutPutFile << num1 << " " << num2 << " " << num3 <<endl;

    OutPutFile.close();

    ifstream inFile;
    int sales,total = 0,day = 1;

    inFile.open("marks.txt");
    // int v1,v2,v3,sum;

    // inFile >> v1 >> v2 >> v3;

    while (inFile >> sales)
    {
        cout<<"sales of day  "<<day<<" = "<< sales <<endl;
        total += sales;
        day++;
    }

    inFile.close();

    // sum = v1 + v2 + v3;
    // cout<<"sum = "<<sum;
    
    cout<<"total sales  = "<<total<<endl;
}