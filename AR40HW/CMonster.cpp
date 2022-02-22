#include "CMonster.h"

CMonster::CMonster()
	: ConsoleObject1(nullptr, nullptr, { 0,0 })
{

}

CMonster::CMonster(TextScreen* _Screen, const char* _Text, const ConsoleVector& _Vector)
	: ConsoleObject1(_Screen, _Text, _Vector)
{
}

CMonster::~CMonster()
{
}


void CMonster::Update()
{
	//���� ����͡�(���Ͱ� ��ġ�� ������ ���Ѿ�� �ϱ�)
	if (GetPos().x_ <= 0 || GetPos().x_ >= 9 || GetPos().y_ <= 0 || GetPos().y_ >= 9)
	{
		SetMove({ 0,0 });
	}

}
