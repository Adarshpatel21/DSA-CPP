#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int note100, note50, note20, note1;

    switch (1) {
        case 1:
            note100 = amount / 100;
            amount = amount % 100;

        case 2:
            note50 = amount / 50;
            amount = amount % 50;

        case 3:
            note20 = amount / 20;
            amount = amount % 20;

        case 4:
            note1 = amount;
            break;
    }

    cout << "100 Rupee Notes = " << note100 << endl;
    cout << "50 Rupee Notes = " << note50 << endl;
    cout << "20 Rupee Notes = " << note20 << endl;
    cout << "1 Rupee Notes = " << note1 << endl;

    return 0;
}