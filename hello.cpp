/****************************
 * This is a simple c++ file. 
 * It contains most of the basic things needed for a c++ beginner.
 * There is a bat file created for easy compiling and running the code.
 * To run the code - my_cpp hello
 * Created by: Badri.
 ****************************/

#include <iostream>
#include <climits> // Contains the limits file of various data types.
#include <vector>

using namespace std;

// int age{18}; // Global variables.

int main()
{
    // long long age{9'461'000'000'000};
    // long double large_amount{2.7e120};
    // char middle_name{'P'};
    // cout << "Hello World " << age << endl;
    // cout << "My middle name is " << middle_name;
    // cout << "A very large number is " << large_amount << endl;

    // Size of data types.

    // cout << "Char: \t\t" << sizeof(char) << "bytes" << endl;
    // cout << "Int: \t\t" << sizeof(int) << "bytes" << endl;
    // cout << "unsigned int: \t" << sizeof(unsigned int) << "bytes" << endl;
    // cout << "Short: \t\t" << sizeof(short) << "bytes" << endl;
    // cout << "Long: \t\t" << sizeof(long) << "bytes" << endl;
    // cout << "Long long: \t" << sizeof(long long) << "bytes" << endl;

    // Minimum values of certain data types.

    // cout << "Minimum Values" << endl;
    // cout << "char: \t\t" << CHAR_MIN << endl;
    // cout << "int: \t\t" << INT_MIN << endl;
    // cout << "short: \t\t" << SHRT_MIN << endl;
    // cout << "long: \t\t" << LONG_MIN << endl;
    // cout << "long long: \t" << LLONG_MIN << endl;

    // Maximum values of certain data types.

    // cout << "Maximum Values" << endl;
    // cout << "char: \t\t" << CHAR_MAX << endl;
    // cout << "int: \t\t" << INT_MAX << endl;
    // cout << "short: \t\t" << SHRT_MAX << endl;
    // cout << "long: \t\t" << LONG_MAX << endl;
    // cout << "long long: \t" << LLONG_MAX << endl;

    // Literals

    // cout << "Enter number of rooms - ";
    // int number_of_rooms{0};
    // const double price_per_room{30.0};
    // const double sales_tax_rate{0.06};
    // const int estimate_expiry{30};
    // cin >> number_of_rooms;
    // cout << "Rooms: " << number_of_rooms << endl;
    // cout << "Price: " << price_per_room << endl;
    // cout << "Cost: " << number_of_rooms * price_per_room << endl;
    // cout << "Tax: " << number_of_rooms * price_per_room * sales_tax_rate << endl;
    // cout << "Total Estimate: " << (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * sales_tax_rate) << endl;
    // cout << "This estimate is valid for " << estimate_expiry << "days!!" << endl;

    // Arrays

    // char vowels[] = {100, 90, 80, 70, 60, 50, 40};
    // cout << "Notice what the value of the array name is: " << vowels;

    // Vectors

    // vector<int> test_score(5);  // A vector with 5 elements. They are initialized with 0 and not garbage values.
    // vector<int> test_score{100, 90, 80, 70, 50};    // A vector with values initialized.
    // vector<double> sex_score(30, 10);   // A vector with 30 elements and all are initialized with value 10.

    // vector<int> vector1{10, 20};
    // vector<int> vector2{100, 200};

    // vector<vector<int>> vecto_2d;

    // vecto_2d.push_back(vector1);
    // vecto_2d.push_back(vector2);

    // cout << "Element are: " << endl;
    // cout << vecto_2d.at(0).at(0) << " " << vecto_2d.at(0).at(1) << endl;
    // cout << vecto_2d.at(1).at(0) << " " << vecto_2d.at(1).at(1) << endl;

    return 0;
}
