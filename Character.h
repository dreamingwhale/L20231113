#pragma once
class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();	//부모에서 가상함수 virtual을 붙이면 자식클래스의 소멸자 실행시 역방향으로 찾아본 후 소멸자를 실행. 즉 부모에서 붙이면 자식의 소멸자를 자동으로 실행한다.
							//만약 함수에 virtual을 붙이면 자식 함수를 실행하게 할 수 있다. 소멸자에 붙이는 virtual과 조금 다름. 자식에게 override할거야.
	virtual void Move();
	int GetHP() { return HP; }			//릴리즈시 메모리inline, __forceinline을 통해 최적화를 실행한다. 클래스를 통해서 만들어놓은 함수를 컴파일시 실제로 사용한 함수의 위치에서 생성하는것

	void SetHP(const int InNewHP)
	{
		if (HP >= 0)
		{
			HP = InNewHP;
		}
	}
	//private처럼 접근은 막지만 상속의 경우에는 접근을 허용한다.
protected:
	int HP;
};

