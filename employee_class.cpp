#include <iostream>

using namespace std;

class employee
{
    public:

    string name,department;
    int id;

    int calculate_salary(int hours_worked)
    {
        int salary = 0;
        if(department == "finance")
        {
            salary = hours_worked * 50;
            cout << "Your Salary: " << salary << endl;
        }
        else if(department == "sales")
        {
            salary = hours_worked * 40;
            cout << "Your Salary: " << salary << endl;
        }
        else if(department == "engineering")
        {
            salary = hours_worked * 60;
            cout << "Your Salary: " << salary << endl;
        }
        else if(department == "training")
        {
            salary = hours_worked * 30;
            cout << "Your Salary: " << salary << endl;
        }
        else{
            cout << "Invalid Department" << endl;
            return 0;
        }
        return salary;
    }
    float taxation(int salary)
    {
        float tax = 0;
        if(salary <= 3000)
        {
            tax = salary * 0.1;
            cout << "Tax: " << tax << endl;
        }
        else if(salary > 3000 && salary <= 5000)
        {
            tax = salary * 0.2;
            cout << "Tax: " << tax << endl;
        }
        else if(salary > 5000)
        {
            tax = salary * 0.3;
            cout << "Tax: " << tax << endl;
        }
        return tax;
    }

    void display_info(int salary, float tax)
    {
        cout << "==========================" << endl;
        cout << "Employee Information: " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout<< "Your salary is: " << salary << endl;
        cout<< "Your tax deduction amount is: " << tax << endl;
        cout << "Your net salary after tax: " << (salary - tax) << endl;
        cout << "==========================" << endl;
    }
};

int main() 
{
    string name,department;
    int id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter department(finance, sales, engineering, training): ";
    cin>>department;

    employee e;
    e.name = name;
    e.id = id;
    e.department = department;
    int hours_worked;
    cout<<"Enter hours worked: ";
    cin>>hours_worked;
    int salary = e.calculate_salary(hours_worked);
    float tax = e.taxation(salary);
    e.display_info(salary, tax);
    
}