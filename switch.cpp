#include <iostream>

using namespace std;

int main()
{
    enum directions
    {
        left,  // Assigns value 0 to left. If a pre defined value is given then it takes it.
        right, // Assigns value of left + 1. If left is assigned a pre defined value then it is enumerated over
        up,    // Assigns value of left + 2
        down   // Assigns value of left + 3
    };

    directions heading{left};

    cout << "Left: " << left << endl;
    cout << "Right: " << right << endl;
    cout << "Up: " << up << endl;
    cout << "Down: " << down << endl;
    switch (heading)
    {
    case left:
        cout << "Going left" << endl;
        break;
    case right:
        cout << "Going right" << endl;
        break;
    default:
        cout << "Wrong direction" << endl;
        break;
    }
    return 0;
}