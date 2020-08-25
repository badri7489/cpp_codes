#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;

public:
	// Overloaded Constructor
	Player();
	Player(string name_val);
	Player(string name_val, int health_val, int val);
};

Player::Player()
	:Player{"None", 0, 0}{
		cout << "No Args Constructor" << endl;
}

Player::Player(string name_val)
	:Player{name_val, 0, 0}{
		cout << "One Arg Constructor" << endl;
}

Player::Player(string name_val, int health_val, int val)
	:name{name_val}, health{health_val}, xp{val}{
		cout << "Three Args Constructor" << endl;
}

int main()
{
	Player empty;
	Player frank("Frank");
	Player villain("Batman", 100, 55);
	return 0;
}
