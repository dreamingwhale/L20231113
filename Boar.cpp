#include "Boar.h"
#include <iostream>

FBoar::FBoar()
{
	HP = 20;
	std::cout << "�˵��� ������." << std::endl;
}


FBoar::~FBoar()
{
	std::cout << "�˵��� �ı���." << std::endl;
}

void FBoar::Move()
{
	std::cout << "�˵��� ������." << std::endl;
}