#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random_number{};
    size_t count{10}; // number of random numbers to generate
    int min{1};       // lower bound(inclsive)
    int max{6};       // upper bound(exclusive)

    // seed the random number generator.
    // If you don't seed the random number generator you will get the same sequence of random numbers on every run.

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    // srand(time(nullptr));

    for (size_t i{1}; i <= count; i++)
    {
        random_number = rand() % (max - min + 1) + min; // generate a random number between min and max.
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}