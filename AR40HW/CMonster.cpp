#include "CMonster.h"

CMonster::CMonster()
	: ConsoleObject(nullptr, nullptr, { 0,0 })
{

}

CMonster::CMonster(TextScreen* _Screen, const char* _Text, const ConsoleVector& _Vector)
	: ConsoleObject(_Screen, _Text, _Vector)
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
