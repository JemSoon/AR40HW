#pragma once
#include "ConsoleObject1.h"

// Ό³Έν :
class CMonster : public ConsoleObject1
{
public:
	// constrcuter destructer
	CMonster();
	CMonster(TextScreen* _Screen, const char* _Text, const ConsoleVector& _Pos);
	~CMonster();

	// delete Function
	CMonster(const CMonster& _Other) = delete;
	CMonster(CMonster&& _Other) noexcept = delete;
	CMonster& operator=(const CMonster& _Other) = delete;
	CMonster& operator=(CMonster&& _Other) noexcept = delete;

	void Update();

protected:

private:
};