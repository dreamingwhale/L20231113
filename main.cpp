#include <iostream>
#include <memory>
#include "Player.h"
#include "Slime.h"
#include "Boar.h"
#include "Goblin.h"
#include <vector>
#include <list>

using namespace std;


int main()
{
	
	vector<FCharacter*> character;
	character.push_back(new FPlayer());
	character.push_back(new FGoblin());
	character.push_back(new FBoar());
	character.push_back(new FSlime());
	character.push_back(new FSlime());
	character.push_back(new FBoar());
	character.push_back(new FGoblin());
	character.push_back(new FBoar());
	character.push_back(new FSlime());

	for (auto it : character)
	{
		it->Move();
	}
	cout << endl;
	for (auto it : character)
	{
		it->~FCharacter();
	}
	return 0;
}
