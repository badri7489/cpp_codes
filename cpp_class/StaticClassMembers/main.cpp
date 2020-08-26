#include<iostream>
#include"Player.hpp"

using namespace std;

void display_active_player(){
	cout << "Active player: " << Player::get_num_players() << endl;
}

int main(){
	display_active_player();
	Player hero("Hero");
	display_active_player();
	{
		Player frank("Frank");
		display_active_player();
	}
	display_active_player();
	
	Player *enemy = new Player("BATMAN", 100, 100);
	
	display_active_player();
	delete enemy;
	display_active_player();
	return 0;
}