#pragma once
class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();	//�θ𿡼� �����Լ� virtual�� ���̸� �ڽ�Ŭ������ �Ҹ��� ����� ���������� ã�ƺ� �� �Ҹ��ڸ� ����. �� �θ𿡼� ���̸� �ڽ��� �Ҹ��ڸ� �ڵ����� �����Ѵ�.
							//���� �Լ��� virtual�� ���̸� �ڽ� �Լ��� �����ϰ� �� �� �ִ�. �Ҹ��ڿ� ���̴� virtual�� ���� �ٸ�. �ڽĿ��� override�Ұž�.
	virtual void Move();
	int GetHP() { return HP; }			//������� �޸�inline, __forceinline�� ���� ����ȭ�� �����Ѵ�. Ŭ������ ���ؼ� �������� �Լ��� �����Ͻ� ������ ����� �Լ��� ��ġ���� �����ϴ°�

	void SetHP(const int InNewHP)
	{
		if (HP >= 0)
		{
			HP = InNewHP;
		}
	}
	//privateó�� ������ ������ ����� ��쿡�� ������ ����Ѵ�.
protected:
	int HP;
};

