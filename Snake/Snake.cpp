// Snake.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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
	ConsoleScreen::GetInst().CreateScreen(10, 10, "□");

	ConsoleObject* NewHead = new Head();
	NewHead->Init({ 5, 5 }, "★");


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


		//죽으면 게임종료(Q눌러도 죽은걸로 간주해서 종료)
		if (NewHead->GetIsDeath() == true)
		{
			break;
		}
	}
	delete NewBody;
	ConsoleScreen::Destroy();

}
