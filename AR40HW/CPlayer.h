#pragma once
#include "ConsoleObject.h"

// Ό³Έν :
class CPlayer : public ConsoleObject
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

