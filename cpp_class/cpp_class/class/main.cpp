#include <iostream>
#include "Account.hpp"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not OK" << endl;

    if (frank_account.withdraw(500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Paisa daal BC" << endl;

    if (frank_account.withdraw(1500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Paisa daal BC" << endl;

    cout << endl;
    return 0;
}