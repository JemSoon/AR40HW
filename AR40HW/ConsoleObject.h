#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// ���� :
class ConsoleObject1
{
public:
	// constrcuter destructer
	ConsoleObject1(
		TextScreen* _Screen,
		const char* _Text,
		const ConsoleVector& _Pos);

	~ConsoleObject1();

	// delete Function
	ConsoleObject1(const ConsoleObject1& _Other) = delete;
	ConsoleObject1(ConsoleObject1&& _Other) noexcept = delete;
	ConsoleObject1& operator=(const ConsoleObject1& _Other) = delete;
	ConsoleObject1& operator=(ConsoleObject1&& _Other) noexcept = delete;

	ConsoleVector GetPos()
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void SetMove(ConsoleVector _Value)
	{
		Pos_ += _Value;
	}


	void Render();

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

