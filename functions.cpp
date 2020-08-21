#include <iostream>
#include <string>

using namespace std;

void pass(int *);

int main()
{
    int s{69};
    cout << s << endl;
    pass(&s);
    cout << s << endl;
    cout << endl;
    return 0;
}

void pass(int *s)
{
    *s = 96;
}