/****************************************************************************************************************************
 * Recursive solutions are better but for this particular problem and some other problems 
 * the recursive solution is not always better. The stack gets filled almost completely and 
 * many a times overflow condition occurs. So to escape this situation iterative approach is much better.
 * Though sometimes iterative approach seems a bit tedious and hard to code but it is always 
 * has better time and space complexity.
 ***************************************************************************************************************************/

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long);

unsigned long long fibonacci(unsigned long long num)
{
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

unsigned long long fibonacci_iter(unsigned long num)
{
    int a = 1, b = 1;
    unsigned long long int c{};
    num -= 2;
    while (num != 0)
    {
        c = a + b;
        a = b;
        b = c;
        num--;
    }
    return c;
}

int main()
{
    cout << "Recursive: " << fibonacci(5) << endl;
    cout << "Iterative: " << fibonacci_iter(5) << endl;
    cout << "Recursive: " << fibonacci(30) << endl;
    cout << "Iterative: " << fibonacci_iter(50) << endl;
    cout << "Recursive: " << fibonacci(40) << endl;
    return 0;
}