#pragma once
#include "Character.h"
class FSlime : public FCharacter
{
public:
	FSlime();
	~FSlime();
	void Move() override;	//부모 클래스의 virtual을 찾아 실행하게 하는 방법. virtual에게서 함수 재정의.override받을거야.
};

