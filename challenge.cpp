#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void display_menu();
char get_selection();
void print_list(const vector<int> *v);
void add_to_list(vector<int> *v, int num);
double calculate_mean(const vector<int> *v);
void display_mean(const vector<int> *v);
int smallest(const vector<int> *v);
void display_smallest(const vector<int> *v);
int largest(const vector<int> *v);
void display_largest(const vector<int> *v);

void display_menu()
{
    cout << "\nP - Print the numbers." << endl;
    cout << "A - Add a number." << endl;
    cout << "M - Display mean of the numbers." << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice - ";
}

char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void print_list(const vector<int> *v)
{
    if (v->size() != 0)
    {
        for (size_t i{0}; i < v->size(); i++)
            cout << v->at(i) << ", ";
        cout << endl;
    }
    else
    {
        cout << "The vector is of size 0." << endl;
    }
}

void add_to_list(vector<int> *v)
{
    int num;
    cout << "\nEnter a number to add to list: ";
    cin >> num;
    v->push_back(num);
}

double calculate_mean(const vector<int> *v)
{
    size_t size = v->size();
    int sum{};
    for (size_t i{0}; i < size; i++)
        sum += v->at(i);
    return static_cast<double>(sum) / size;
}

void display_mean(const vector<int> *v)
{
    cout << "\nThe mean of the list is: " << calculate_mean(v) << endl;
}

int main()
{
    vector<int> v;
    char selection{};
    do
    {
        display_menu();
        selection = get_selection();
        switch (selection)
        {
        case 'P':
            print_list(&v);
            break;
        case 'A':
            add_to_list(&v);
            break;
        case 'M':
            display_mean(&v);
            break;
        default:
            break;
        }

    } while (selection != 'Q');
    return 0;
}