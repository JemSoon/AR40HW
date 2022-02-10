#pragma once
#include "TextScreen.h"
#include "CMonster.h"
#include "CPlayer.h"

extern TextScreen MainScreen;
extern CMonster* AllMonsters;
extern CPlayer MainPlayer;

class GlobalValue
{
	// 클래스 정적 변수를 선언할수가 있습니다.
public:
	// 클래스에 속한 전역변수가 됩니다.
	//static TextScreen MainScreen;
	//static Monster* AllMonsters;
	//static Player MainPlayer;


};

// 굳이 이렇게 할필요가 없습니다.
// extern GlobalValue Inst;

//
//// 설명 :
//class ConsoleGlobalInst
//{
//public:
//	// constrcuter destructer
//	ConsoleGlobalInst();
//	~ConsoleGlobalInst();
//
//	// delete Function
//	ConsoleGlobalInst(const ConsoleGlobalInst& _Other) = delete;
//	ConsoleGlobalInst(ConsoleGlobalInst&& _Other) noexcept = delete;
//	ConsoleGlobalInst& operator=(const ConsoleGlobalInst& _Other) = delete;
//	ConsoleGlobalInst& operator=(ConsoleGlobalInst&& _Other) noexcept = delete;
//
//protected:
//
//private:
//
//};

