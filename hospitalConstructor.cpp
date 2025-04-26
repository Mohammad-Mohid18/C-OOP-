#include <iostream>

using namespace std;

class hospital
{
    public:
    char gender;
    int age;

    hospital(char g, int a)
    {
        gender = g;
        age = a;
    }

    void ward()
    {
        if(age <= 16)
        {
            cout << "go the childrens ward"<<endl;
        }
        else if(gender == 'f')
        {
            cout <<"go to female ward"<<endl;
        }
        else if(gender == 'm')
        {
            cout<<"go to male ward"<<endl;
        }
    }
};

int main()
{
    char gender;
    int age;

    cout<<" Enter gender:   ";
    cin>>gender;
    cout<<"Enter age:   ";
    cin>>age;


    hospital p1(gender,age);
    p1.ward();
    hospital p2('f',14);
    p2.ward();
}