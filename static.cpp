#include <iostream>

using namespace std;

void static_local_example();

void static_local_example()
{
    static int num{5000};
    cout << "\nLocal static num is " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is " << num << " is static_local_example - end" << endl;
}

int main()
{
    static_local_example();
    static_local_example();
    static_local_example();
    cout << endl;
    return 0;
}