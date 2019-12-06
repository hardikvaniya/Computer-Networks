#include <iostream>
using namespace std;

class EMPLOYEE
{
  long long EmployeeNumber;
  string EmployeeName;
  int BasicSalary;
  float Allowances, IT, NetSalary;

public:
  void setEmpNo(long long en)
  {
    EmployeeNumber = en;
  }
  long long getEmpNo()
  {
    return EmployeeNumber;
  }

  void setName(string n)
  {
    EmployeeName = n;
  }

  string getName()
  {
    return EmployeeName;
  }

  void setBasicSalary(int bp)
  {
    BasicSalary = bp;
  }
  int getSalary()
  {
    return BasicSalary;
  }

  void readData()
  {
    cout << "Input EmployeeNumber: \n>";
    cin >> EmployeeNumber;
    cout << "Input EmployeeName \n>";
    cin >> EmployeeName;
    cout << "Input Basic salary \n>";
    cin >> BasicSalary;
  }
  void calculate(int no = 1, int supplyUnits = 1)
  {
    Allowances = no * supplyUnits * 0.25 * BasicSalary;
    IT = 0.1 * BasicSalary + Allowances;
    NetSalary = BasicSalary + Allowances - IT;
  }
  void PrintSlip()
  {
    cout << "\n\n\tPrinting Salary Slip\n\n";
    cout << "\tEmployee Name: " << this->getName() << endl;
    cout << "\tEmployee Number: " << this->getEmpNo() << endl;
    cout << "\tBasic Salary: " << this->getSalary() << endl;
    cout << "\tAllowances: " << this->Allowances << endl;
    cout << "\tIncome Tax: " << this->IT << endl;
    cout << "\tNet Salary: " << this->NetSalary << endl;
  }
};

class Manager : public EMPLOYEE
{
  int projects;

public:
  void setNumberOfProjects()
  {
    cout << "Input number of Projects: \n>";
    cin >> projects;
    calculate(projects);
    PrintSlip();
  }
  int getNumberOfProjects()
  {
    return projects;
  }
};

class Supply_Manager : public EMPLOYEE
{
  int noOfUnits, proj;

public:
  void setUnits()
  {
    cout << "Input number of supply units: \n>";
    cin >> noOfUnits;
    cout << "Number of projects each supply unit has? \n>";
    cin >> proj;
    calculate(noOfUnits, proj);
    PrintSlip();
  }
  int getUnits()
  {
    return noOfUnits;
  }
};

int main()
{
  Manager m;
  m.readData();
  m.setNumberOfProjects();
  Supply_Manager sm;
  sm.readData();
  sm.setUnits();
  // sm.calculate(3, 5);
  // sm.PrintSlip();
}
