#pragma once
#include "Character.h"
class FSlime : public FCharacter
{
public:
	FSlime();
	~FSlime();
	void Move() override;	//�θ� Ŭ������ virtual�� ã�� �����ϰ� �ϴ� ���. virtual���Լ� �Լ� ������.override�����ž�.
};

