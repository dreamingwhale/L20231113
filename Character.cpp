#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	HP = 100;
	std::cout << "캐릭터 생성됨." << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "캐릭터 파괴됨." << std::endl;
}
void FCharacter::Move()
{
	std::cout << "캐릭터 움직임." << std::endl;
}
