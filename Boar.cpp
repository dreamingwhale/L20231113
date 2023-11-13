#include "Boar.h"
#include <iostream>

FBoar::FBoar()
{
	HP = 20;
	std::cout << "¸ËµÅÁö »ý¼ºµÊ." << std::endl;
}


FBoar::~FBoar()
{
	std::cout << "¸ËµÅÁö ÆÄ±«µÊ." << std::endl;
}

void FBoar::Move()
{
	std::cout << "¸ËµÅÁö ¿òÁ÷ÀÓ." << std::endl;
}