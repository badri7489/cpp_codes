#include <iostream>

using namespace std;

int square(int &num)
{
    return num * num;
}

int main()
{
    // cout << square(5);   // this will give an error of r-value type.
    int num{10};
    cout << square(num);
    cout << endl;
    return 0;
}