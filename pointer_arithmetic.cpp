#include <iostream>

using namespace std;

int main()
{
    int scores[]{100, 95, 89, 68, -1}; // -1 is the sentinal value.
    int *scores_ptr{scores};

    while (*scores_ptr != -1)
    {
        cout << *scores_ptr << endl;
        scores_ptr++;
    }
    cout << "\n------------------------------------" << endl;
    scores_ptr = scores;
    while (*scores_ptr != -1)
        cout << *scores_ptr++ << endl;
    cout << endl;
    return 0;
}