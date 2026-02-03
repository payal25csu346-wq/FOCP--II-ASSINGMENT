#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;

    cout << "Enter score of Player 1: ";
    cin >> p1;
    cout << "Enter score of Player 2: ";
    cin >> p2;
    cout << "Enter score of Player 3: ";
    cin >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is ahead with score " << p1 << endl;
    } 
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is ahead with score " << p2 << endl;
    } 
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is ahead with score " << p3 << endl;
    } 
    else {
        cout << "It's a tie between players!" << endl;
    }

    return 0;
}
