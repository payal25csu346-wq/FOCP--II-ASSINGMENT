#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // First check if valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }

    } else {
        cout << "Not a valid triangle." << endl;
    }

    return 0;
}
