#include <iostream>

using namespace std;

void print(const int *const array, size_t size);
int *apply_all(int *arr1, size_t n1, int *arr2, size_t n2);

void print(const int *const array, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

int *apply_all(int *arr1, size_t n1, int *arr2, size_t n2)
{
    size_t n3 = n1 * n2;
    int *new_storage{nullptr};
    new_storage = new int[n3];
    int k{0};
    for (size_t i = 0; i < n2; i++)
    {
        for (size_t j = 0; j < n1; j++)
            new_storage[k++] = arr2[i] * arr1[j];
    }
    return new_storage;
}

int main()
{
    const size_t arr1_size{5};
    const size_t arr2_size{3};

    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};
    cout << "Array 1: ";
    print(arr1, arr1_size);

    cout << endl;

    cout << "Array 2: ";
    print(arr2, arr2_size);

    cout << endl;

    int *new_storage = apply_all(arr1, arr1_size, arr2, arr2_size);

    cout << "New Array: ";
    print(new_storage, arr1_size * arr2_size);

    delete[] new_storage;
    cout << endl;
    return 0;
}