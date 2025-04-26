#include <iostream>

using namespace std;

class student_test
{
    public:

    string name,program;
    int roll_number,number_of_quizes;

    int result(int total_marks)
    {
        int marks_obtained;
        int marks = 0;
        for(int i = 0; i < number_of_quizes; i++)
        {
            cout << "Enter marks obtained in quiz " << (i+1) << ": ";
            cin >> marks_obtained;
            marks += marks_obtained;
        }

        cout <<"Marks obtained: " << marks << endl;
        int percentage = (marks * 100) / total_marks;
        return percentage;
    }
    void display(int percentage)
    {
        cout << "Student Information: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Program: " << program << endl;
        cout << "Number of Quizes: " << number_of_quizes << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    student_test student;

    cout << "Enter student's name: ";
    cin >> student.name;

    cout << "Enter student's roll number: ";
    cin >> student.roll_number;

    cout << "Enter student's program: ";
    cin >> student.program;

    cout << "Enter number of quizes: ";
    cin >> student.number_of_quizes;

    int total_marks = student.number_of_quizes * 100;

    int percentage = student.result(total_marks);

    student.display(percentage);

    return 0;
}
