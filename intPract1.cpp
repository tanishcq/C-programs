#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
    string name;
    int totalSales;
    int sold, unitPrice, id;

public:
    // Default constructor
    Employee() {}
    // First constructor
    Employee(int sol, int price, string na, int ID)
    {
        sold = sol;
        unitPrice = price;
        name = na;
        id = ID;
    }
    void getSalary()
    {
        int temp = 0.2 * totalSales;
        cout << "Base Salary of each employee is 50,000 and bonus is 20% of sales" << endl;
        cout << "The Salary of Employee " << name << " ID : " << id << " is " << (temp + 50000) << endl;
        cout << endl;
    }
    void getSales()
    {
        cout << "Total units sold by " << name << " at a price of " << unitPrice << endl;
        totalSales = (unitPrice * sold);
        cout << "Total sales : " << totalSales << endl;
        cout << endl;
    }
};
int main()
{
    int n = 5;
    int sol, price;
    string na, ID;
    vector<Employee> empList;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of Employee " << (i + 1) << endl;
        cin >> sol >> price >> na;
        Employee temp(sol, price, na, i + 1);
        empList.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        empList[i].getSales();
        empList[i].getSalary();
    }
    return 0;
}
