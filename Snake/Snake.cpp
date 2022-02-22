// Snake.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include "ConsoleScreen.h"
#include <conio.h>
#include "Head.h"
#include "Body.h"
#include <vector>
#include "ConsoleRandom.h"
#include "GlobalGameLogic.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(327);
	ConsoleScreen::GetInst().CreateScreen(10, 10, "��");

	ConsoleObject* NewHead = new Head();
	NewHead->Init({ 5, 5 }, "��");


	ConsoleObject* NewBody = GlobalGameLogic::CreateBodyLogic(NewHead);

	while (true)
	{
		if (nullptr == NewBody)
		{
			NewBody = GlobalGameLogic::CreateBodyLogic(NewHead);
		}

		ConsoleScreen::GetInst().RenderStart();

		NewBody->Render();
		NewHead->Render();

		ConsoleScreen::GetInst().RenderEnd();

		NewBody->Update();
		NewHead->Update();

		if (true == NewHead->GetIsDeath())
		{
			delete NewHead;
			NewHead = nullptr;
			break;
		}

		if (NewHead->OverLapCheck(NewBody))
		{
			NewHead->OverLap(NewBody);
			delete NewBody;
			NewBody = nullptr;

		}


		//������ ��������(Q������ �����ɷ� �����ؼ� ����)
		if (NewHead->GetIsDeath() == true)
		{
			break;
		}
	}
	delete NewBody;
	ConsoleScreen::Destroy();

}
