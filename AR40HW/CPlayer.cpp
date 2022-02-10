#include "CPlayer.h"
#include <conio.h>
#include "ConsoleGlobalInst.h"
#include <stdlib.h>//exit�Լ� ����(���������� �߰�)

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
		// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.

		//���� ����͡�
		if (GetPos().x_ <= 0)//�ҷ���x��ǥ�� 0���� �۰ų� ���ٸ�
		{
			SetMove({ 0,0 });//�������� 0�̵ȴ�
		}
		else//�׿ܿ� ���� �۵�
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
		//��MSDN���� ���α׷� ���� ���� �˻��� ���ҽ��ϴ�
		//�ٵ� ���� ���´�..?
		break;
	default:
		break;
	}


}

