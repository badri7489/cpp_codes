#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name{"XXXXXXXX"};
	int health;
	int xp;

public:
	void set_name(string name_val)
	{
		name = name_val;
	}
	string get_name()
	{
		return name;
	}
	Player();
	Player(string name_val);
	Player(string name_val, int health_val, int val);
};

Player::Player() : name{"None"}, health{0}, xp{0}
{
}

Player::Player(string name_val)
	: name{name_val}, health{0}, xp{0}
{
}

Player::Player(string name_val, int health_val, int val)
	: name{name_val}, health{health_val}, xp{val}
{
}

int main()
{
	Player empty;
	Player frank("Frank");
	Player villain("Batman", 100, 55);
	return 0;
}
