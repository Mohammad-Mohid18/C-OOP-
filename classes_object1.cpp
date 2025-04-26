#include <iostream>

using namespace std;


class student_info {

    public:

    string name;
    int id;


    int result(int mids_marks, int final_marks, int assigned_marks)
    {
        int total_marks = mids_marks + final_marks + assigned_marks;
        int percentage = (total_marks * 100) / 100;
        return percentage;
    }

    void display()
    {
        cout << "Student Information: " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
    void grades(int percentage)
    {
        if(percentage > 87)
        {
            cout << "your grade is A with  " << percentage <<"%" << endl;
        }
        else if(percentage > 73)
        {
            cout<<"your grade is B with  " << percentage <<"%"<< endl;
        }
        else if(percentage > 60)
        {
            cout<<"your grade is C with  " << percentage<<"%" << endl;
        }
        else if(percentage  < 60)
        {
            cout<<"your failed with " << percentage<<"%" << endl;
        }
    }

};

int main()
{
    string student_name;
    cout<<"enter your name:  ";
    cin>>student_name;

    int student_id;
    cout<<"enter your id:  ";
    cin>>student_id;

    student_info student;
    student.name = student_name;
    student.id = student_id;
    cout << "Enter midterm marks: ";
    int midterm_marks;
    cin >> midterm_marks;
    cout << "Enter final marks: ";
    int final_marks;
    cin >> final_marks;
    cout << "Enter assigned marks: ";
    int assigned_marks;
    cin >> assigned_marks;

    student.display();

    int percentage = student.result(midterm_marks, final_marks, assigned_marks);
    student.grades(percentage);
}