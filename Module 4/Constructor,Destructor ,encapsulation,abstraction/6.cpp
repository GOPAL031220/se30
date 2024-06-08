#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;
public:
    Employee(string n, int id, double s) 
	{   name = n;
        employeeID = id;
        salary = s;
    }

    setSalary(int performanceRating) {
        if (performanceRating == 1)
		{
            salary *= 0.9;
        } 
		else if (performanceRating == 2) 
		{
            salary *= 1.0;
        } 
		else if (performanceRating == 3) 
		{
            salary *= 1.1;
        }
		else if (performanceRating == 4)
		{
            salary *= 1.2;
        }
		else if (performanceRating == 5)
		{
            salary *= 1.3;
        }
    }

    display()
	{
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("Gopal", 101, 50000.0);
    Employee emp2("Rudra", 102, 60000.0);

    cout << "Employee 1 Information:" << endl;
    emp1.display();

    cout << "\nSetting salary based on performance..." << endl;
    emp1.setSalary(4); // 20% increase

    cout << "\nUpdated Employee 1 Information:" << endl;
    emp1.display();

    cout << "\n\nEmployee 2 Information:" << endl;
    emp2.display();

    cout << "\nSetting salary based on performance..." << endl;
    emp2.setSalary(2); // no change

    cout << "\nUpdated Employee 2 Information:" << endl;
    emp2.display();
}
