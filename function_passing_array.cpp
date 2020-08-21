#include <iostream>

using namespace std;

void print_array(const int score[], size_t size);
void set_array(int score[], size_t size, int x);

void print_array(const int score[], size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << score[i] << ", ";
    cout << endl;
}

void set_array(int score[], size_t size, int x)
{
    for (size_t i = 0; i < size; i++)
        score[i] = x;
}

int main()
{
    int my_score[]{100, 98, 90, 86, 84};

    print_array(my_score, 5);
    set_array(my_score, 5, 100);
    print_array(my_score, 5);

    cout << endl;
    return 0;
}
