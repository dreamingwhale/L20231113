#include "Slime.h"
#include <iostream>
FSlime::FSlime()
{
	HP = 10;
	std::cout << "슬라임 생성됨." << std::endl;
}

FSlime::~FSlime()
{
	HP = 0;
	std::cout << "슬라임 생성됨." << std::endl;
}

void FSlime::Move()
{
	FCharacter::Move();
	std::cout << "슬라임 움직임." << std::endl;
}