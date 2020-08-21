#include <iostream>

using namespace std;

int main()
{
    // int total{};
    // int num1{}, num2{}, num3{};
    // const int count{3};

    // cout << "Enter 3 integers seperated by spaces - ";
    // cin >> num1 >> num2 >> num3;

    // total = num1 + num2 + num3;
    // double average{0.0};
    // average = static_cast<double>(total) / count; // It double checks if total can be converted to double or not and then casts.
    // // average = (double)total / count;           // Whatever total is it just converts it to double. Old C-style.
    // cout << "The 3 numbers are - " << num1 << ", " << num2 << ", " << num3 << endl;
    // cout << "The sum is - " << total << endl;
    // cout << "Average is - " << average << endl;

    // bool equals_result{false};
    // bool not_equal_result{false};
    // double num1{}, num2{};
    // cout << boolalpha; // Displays true/false instead of 1/0 in booleans.

    // cout << "Enter 2 integers - ";
    // cin >> num1 >> num2;
    // equals_result = num1 == num2;
    // not_equal_result = num1 != num2;
    // cout << "Comparison result(equals) " << equals_result << endl;
    // cout << "Comparison result(equals) " << not_equal_result << endl;

    // Currency Changer

    int amount;
    cout << "Enter an amount in cents: ";
    cin >> amount;

    cout << "Dollars: \t" << amount / 100 << endl;
    int quarters = (amount % 100);
    cout << "Quarters: \t" << quarters / 25 << endl;
    int dimes = (quarters % 25);
    cout << "Dimes: \t\t" << dimes / 10 << endl;
    int nickels = (dimes % 10);
    cout << "Nickels: \t" << nickels / 5 << endl;
    cout << "Pennies: \t" << nickels % 5 << endl;

    return 0;
}