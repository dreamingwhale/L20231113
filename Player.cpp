#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	std::cout << "플레이어 생성됨." << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "플레이어 파괴됨." << std::endl;
}
void FPlayer::Move()
{
	std::cout << "플레이어 움직임." << std::endl;
}