#include "ConsoleObject1.h"

ConsoleObject1::ConsoleObject1(
	TextScreen* _Screen,
	const char* _Text,
	const ConsoleVector& _Pos
)
	: Screen_(_Screen)
	, Pos_(_Pos)

{
	//if (nullptr == _Screen)
	//{
	//	assert(false);
	//}

	if (nullptr == _Text)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}

ConsoleObject1::~ConsoleObject1()
{
}

void ConsoleObject1::Render()
{
	if (nullptr == Screen_)
	{
		assert(false);
	}

	Screen_->SetPixel(Pos_, Text_);
}
