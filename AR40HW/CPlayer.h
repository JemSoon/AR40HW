#pragma once
#include "ConsoleObject1.h"

// Ό³Έν :
class CPlayer : public ConsoleObject1
{
public:
	// constrcuter destructer
	CPlayer(TextScreen* _Screen, const char* _Text);
	~CPlayer();

	// delete Function
	CPlayer(const CPlayer& _Other) = delete;
	CPlayer(CPlayer&& _Other) noexcept = delete;
	CPlayer& operator=(const CPlayer& _Other) = delete;
	CPlayer& operator=(CPlayer&& _Other) noexcept = delete;

	void Update();

protected:

private:
	// Monster* OtherMonster;

};

