#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n--------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n--------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------------------" << endl;
    vector<string> stooges{"Anima", "Aditi", "Sweety"};

    for (auto str : stooges)
        str = "Bitch"; // str is a COPY of each vector element.

    for (auto str : stooges)
        cout << str << endl; // No Changes.

    cout << "\n--------------------------------" << endl;

    for (auto &str : stooges) // str is a reference to each vector element.
        str = "Bitch";

    for (auto const &str : stooges) // notice we are using const.
        cout << str << endl;        // now the vector elements are changed.

    cout << endl;
    return 0;
}