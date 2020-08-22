#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value);
void display(const int *const array, size_t size);

int *create_array(size_t size, int init_value)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{}; i < size; i++)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size)
{
    for (size_t i{}; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout << "\nNumber of integers you want to allocate - ";
    cin >> size;
    cout << "What is the value to initialised to - ";
    cin >> init_value;

    my_array = create_array(size, init_value);

    display(my_array, size);

    delete[] my_array;

    cout << endl;
    return 0;
}