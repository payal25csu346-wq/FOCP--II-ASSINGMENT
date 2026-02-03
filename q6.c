#include <iostream>
using namespace std;

int main() {
    int n;
    float basic, bonus, netSalary;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basic;

        // Calculate 12% bonus
        bonus = 0.12 * basic;

        // Net salary = Basic + Bonus
        netSalary = basic + bonus;

        // Display results
        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    return 0;
}
