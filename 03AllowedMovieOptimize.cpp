#include <iostream>

using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    string PrintShow, PrintMoney;

    cout << "Enter your Age: ";
    cin >> age;
    if (age < 13) {
        PrintShow = "G Show";
    } else if (age >= 13 && age < 16) {
        cout << "With Parent? (1 for yes, 0 for no): ";
        cin >> parent;
        if (parent) {
            PrintShow = "G, PG, & R Show";
        } else {
            PrintShow = "G & PG Show";
        }
    } else {
        PrintShow = "G, PG, & R Show";
    }
    cout << "Enter Money: ";
    cin >> money;
    if (money < 7.5) {
        PrintMoney = "Not Enough Money";
    } else if (money < 10.5) {
        PrintMoney = "Can go to matinee show";
    } else {
        PrintMoney = "Can go to evening & matinee show";
    }
    cout << PrintShow << endl;
    cout << PrintMoney << endl;
    return 0;
}