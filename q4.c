#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, totalAmount, discount, finalAmount;

    // Input
    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    // Calculate total amount
    totalAmount = quantity * unitPrice;

    // Calculate 20% discount
    discount = 0.20 * totalAmount;

    // Final amount after discount
    finalAmount = totalAmount - discount;

    // Output
    cout << "\nItem No: " << itemNo << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Amount to Pay: " << finalAmount << endl;

    return 0;
}
