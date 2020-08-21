#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing int " << num << endl;
}
void print(double num)
{
    cout << "Printing double " << num << endl;
}
void print(string num)
{
    cout << "Printing string " << num << endl;
}
void print(string num1, string num2)
{
    cout << "Printing 2 string " << num1 << " and " << num2 << endl;
}
void print(vector<string> num)
{
    cout << "Printing vector of strings ";
    for (auto i : num)
        cout << i << " ";
    cout << endl;
}

int main()
{
    string s{"C++ String"};
    vector<string> v{"Rose", "Mary", "Marlow"};
    print(100);                 // int
    print('A');                 // character is always promoted to int. ASCII value of A is 65.
    print(123.5);               //Double.
    print(123.3F);              //Float is promoted to double.
    print("C-style string");    //  C-style string is promoted to C++ style string.
    print(s);                   // C++ Style string.
    print("C-style string", s); // Two styles of string.
    print(v);                   // Printing Vector of strings.
    cout << endl;
    return 0;
}