#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // int num{10};
    // cout << "Value of num: " << num << endl;
    // cout << "Size of num: " << sizeof(num) << endl;
    // cout << "Address of num: " << &num << endl;

    // // Same thing with pointer variable.

    // int *p;
    // cout << "\nValue of p is: " << p << endl;
    // cout << "Address of p is: " << &p << endl;
    // cout << "Size of p is: " << sizeof(p) << endl;
    // p = nullptr;
    // cout << "\nValue of p is: " << p << endl;

    // int *p1{nullptr};
    // double *p2{nullptr};
    // unsigned long long *p3{nullptr};
    // vector<string> *p4{nullptr};
    // string *p5{nullptr};

    // cout << "\nSize of p1 is: " << sizeof(p1) << endl;
    // cout << "Size of p2 is: " << sizeof(p2) << endl;
    // cout << "Size of p3 is: " << sizeof(p3) << endl;
    // cout << "Size of p4 is: " << sizeof(p4) << endl;
    // cout << "Size of p5 is: " << sizeof(p5) << endl;

    // int score{10};
    // double high_temp{100.7};

    // int *score_ptr{nullptr};

    // score_ptr = &score;
    // cout << "\nValue of score is: " << score << endl;
    // cout << "Address of score is: " << &score << endl;
    // cout << "Value of score_ptr is: " << score_ptr << endl;

    // score_ptr = &high_temp;

    // Access the data we are pointing to - dereferencing a pointer.
    // Dereferencing is done by * operator.

    // int score{100};
    // int *score_ptr{&score};

    // cout << "score_ptr is: " << *score_ptr << endl;
    // *score_ptr = 200; //dereferencing score_ptr.
    // cout << "score_ptr is: " << *score_ptr << endl;
    // cout << "score is: " << score << endl;

    // double high_temp{100.7};
    // double low_temp{37.1};
    // double *temp_ptr{&high_temp};
    // cout << "\ntemp_ptr: " << *temp_ptr << endl;
    // temp_ptr = &low_temp;
    // cout << "temp_ptr: " << *temp_ptr << endl;

    // string name{"Badri"};
    // string *string_ptr{&name};

    // cout << "\nStart: " << *string_ptr << endl;
    // *string_ptr = "Anima";
    // cout << "End: " << *string_ptr << endl;

    // vector<string> names{"Anima", "aditi", "sweety"};
    // vector<string> *vector_ptr{nullptr};

    // vector_ptr = &names;

    // cout << "\nFirst name - " << (*vector_ptr).at(0) << endl;

    // cout << "All names - ";
    // for (auto i : (*vector_ptr))
    //     cout << i << " ";
    // cout << endl;

    // Dynamic Memory Allocation using new key.

    int *int_ptr{nullptr};

    int_ptr = new int;

    cout << "Address is: " << int_ptr << endl;
    cout << "Value is: " << *int_ptr << endl;

    delete int_ptr; //Deallocates the memory.

    size_t size{0};
    double *temp_ptr{nullptr};

    cout << "How many temp? ";
    cin >> size;

    // while (true)
    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete[] temp_ptr;

    cout << endl;
    return 0;
}