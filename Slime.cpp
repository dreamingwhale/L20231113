#include "Slime.h"
#include <iostream>
FSlime::FSlime()
{
	HP = 10;
	std::cout << "������ ������." << std::endl;
}

FSlime::~FSlime()
{
	HP = 0;
	std::cout << "������ ������." << std::endl;
}

void FSlime::Move()
{
	FCharacter::Move();
	std::cout << "������ ������." << std::endl;
}