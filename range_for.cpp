#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    // int scores[]{10, 20, 30};
    // for (int score : scores)
    //     cout << score << endl;

    // vector<double> temperature{100.2, 90.7, 90.3, 72.5, 80.0};
    // double average_temp{};
    // double total{};

    // for (auto temp : temperature)
    //     total += temp;

    // if (temperature.size() != 0)
    //     average_temp = total / temperature.size();

    // cout << fixed << setprecision(1); // Shows output upto a precision specified.
    // cout << "Average Temperature is " << average_temp << endl;

    for (auto c : "This is a test")
    {
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
    }

    cout << endl;
    return 0;
}