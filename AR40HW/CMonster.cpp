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
	//내가 만든것↓(몬스터가 배치판 밖으로 못넘어가게 하기)
	if (GetPos().x_ <= 0 || GetPos().x_ >= 9 || GetPos().y_ <= 0 || GetPos().y_ >= 9)
	{
		SetMove({ 0,0 });
	}

}
