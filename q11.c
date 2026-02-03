#include <iostream>
using namespace std;

int main() {
    int quantity;
    float pricePerItem, total, discount = 0, finalAmount;

    cout << "Enter number of items ordered: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> pricePerItem;

    // Calculate total expense
    total = quantity * pricePerItem;

    // Apply discount if order > 1000 items
    if (quantity > 1000) {
        discount = 0.10 * total;
    }

    finalAmount = total - discount;

    cout << "\nTotal Amount: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Amount to Pay: " << finalAmount << endl;

    return 0;
}
