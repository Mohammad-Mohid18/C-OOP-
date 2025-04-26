#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    ofstream marksFile;

    marksFile.open("results.txt");

    int i = 0;
    while(i <= 200)
    {
        marksFile << (rand() % 101) <<endl;
        i++;
    }
    marksFile.close();

    ifstream markFile;
    markFile.open("results.txt");

    ofstream passFile;
    passFile.open("pass.txt");

    ofstream failFile;
    failFile.open("fail.txt");


    int marks,passCount = 0, failCount = 0, maxMarks = 0, minMarks = 100;

    while (markFile >> marks)
    {
        if(marks >= 60)
        {
            passFile << marks <<endl;
            passCount++;
        }
        else if(marks < 60)
        {
            failFile << marks <<endl;
            failCount++;
        }

        if(marks > maxMarks)
        {
            maxMarks = marks;
        }
        if(marks < minMarks)
        {
            minMarks = marks;
        }
    }
    markFile.close();
    passFile.close();
    failFile.close();

    cout<<" Passed students = "<< passCount  <<" Failed Students = "<< failCount <<endl;
    cout<<" Maximum Marks Achieved = "<< maxMarks <<" Minimum Marks Obtained = "<< minMarks;

    return 0;

}