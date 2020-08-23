#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
public:
    // Attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    // Method
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account
{
public:
    string name;
    double balance;

    bool deposit(double bal)
    {
        balance += bal;
        cout << "In Deposit" << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In Withdraw" << endl;
    }
};

int main()
{
    // Player frank;
    // Player hero;

    // Player player[]{frank, hero};

    // vector<Player> player_vec{frank};
    // player_vec.push_back(hero);

    // Player *enemy{nullptr};
    // enemy = new Player;

    // delete enemy;

    Account frank_account;
    frank_account.name = "Frank's Account";
    frank_account.balance = 5000;

    frank_account.deposit(1000);
    frank_account.withdraw(5000);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("How you doing");

    Player *enemy = new Player();
    (*enemy).name = "Thanos";
    enemy->health = 10000;
    enemy->xp = 9999;
    (*enemy).talk("I am inevitable!");
    cout << endl;
    return 0;
}