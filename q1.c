#include<iostream>
using namespace std;

int main() {
    float a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Calculate average
    float average = (a + b + c) / 3;

    // Output the result
    cout << "Average = " << average << endl;

    return 0;
}
