#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

class CPlayer
{
public:
	CPlayer(TextScreen* _Screen, const char* _Text);
	~CPlayer();

	CPlayer(const CPlayer& _Other) = delete;
	CPlayer(CPlayer&& _Other) noexcept = delete;
	CPlayer& operator=(const CPlayer& _Other) = delete;
	CPlayer& operator=(CPlayer&& _Other)noexcept = delete;

	// ������ �ܼ��� �Լ��� ���� cpp�� �������� �ʾƵ� �������ϴ�.
	ConsoleVector GetPos()
	{
		return Pos_;
	}
	
	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void Render();
	void Update();
protected:

private:
	// Has a �����̶�� �մϴ�.
	// �÷��̾�� ������ �ʹ����� ���� 
	// ���� �� ������ ������ ���� ������ �Ѵٸ�
	// ���̳� �����Ҵ�� �ڽŸ��� �޸𸮸� ������ �Ѵ�.
	TextScreen* Screen_;
	ConsoleVector Pos_;
	// ���� ���̴�.
	char Text_[3];
};

