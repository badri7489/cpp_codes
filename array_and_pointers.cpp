#include <iostream>

using namespace std;

int main()
{
    int scores[]{100, 95, 89};

    cout << "Value of scores: " << scores << endl;

    int *scores_ptr{scores};
    cout << "Value of score_ptr: " << scores_ptr << endl;

    cout << "\nArray Subscript notation--------------------------------------" << endl;
    cout << "scores[0]\t" << scores[0] << endl;
    cout << "scores[1]\t" << scores[1] << endl;
    cout << "scores[2]\t" << scores[2] << endl;

    cout << "\nPointer Subscript notation------------------------------------" << endl;
    cout << "scores_ptr[0]\t" << scores_ptr[0] << endl;
    cout << "scores_ptr[1]\t" << scores_ptr[1] << endl;
    cout << "scores_ptr[2]\t" << scores_ptr[2] << endl;

    cout << "\nPointer offset notation---------------------------------------" << endl;
    cout << "*scores_ptr\t\t" << *scores_ptr << endl;
    cout << "*(scores_ptr + 1)\t" << *(scores_ptr + 1) << endl;
    cout << "*(scores_ptr + 2)\t" << *(scores_ptr + 2) << endl;

    cout << "\nArray offset notation-----------------------------------------" << endl;
    cout << "*scores\t\t" << *scores << endl;
    cout << "*(scores + 1)\t" << *(scores + 1) << endl;
    cout << "*(scores + 2)\t" << *(scores + 2) << endl;

    cout << endl;
    return 0;
}