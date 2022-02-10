#include "CPlayer.h"
#include <conio.h>
#include "ConsoleGlobalInst.h"
#include <stdlib.h>//exit함수 사용용(개인적으로 추가)

CPlayer::CPlayer(TextScreen* _Screen, const char* _Text)
	: ConsoleObject(_Screen, _Text, _Screen->GetSize().GetHalfVector())
{
}

CPlayer::~CPlayer()
{
}


void CPlayer::Update()
{
	// GlobalValue::AllMonsters

	// AllMonsters[2];

	// Pos_.x_ += 1; // Pos_.y_ += 0;
	//   'a'
	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// 화면바깥으로 이동하면 이동이 안되게 해주세요.

		//내가 만든것↓
		if (GetPos().x_ <= 0)//불러온x좌표가 0보다 작거나 같다면
		{
			SetMove({ 0,0 });//움직임은 0이된다
		}
		else//그외엔 정상 작동
		{
			SetMove({ -1, 0 });
		}

		break;
	case 'd':
	case 'D':
		if (GetPos().x_ >= 9)
		{
			SetMove({ 0,0 });
		}
		else
		{
			SetMove({ 1, 0 });
		}
		break;
	case 'w':
	case 'W':
		if (GetPos().y_ <= 0)
		{
			SetMove({ 0,0 });
		}
		else
		{
			SetMove({ 0, -1 });
		}
		break;
	case 's':
	case 'S':
		if (GetPos().y_ >= 9)
		{
			SetMove({ 0,0 });
		}
		else
		{
			SetMove({ 0, 1 });
		}
		break;
	case 'q':
	case 'Q':
		exit('q');
		exit('Q');
		//↑MSDN에서 프로그램 종료 관련 검색해 보았습니다
		//근데 릭이 나온다..?
		break;
	default:
		break;
	}


}

