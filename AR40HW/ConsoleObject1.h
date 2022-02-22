#pragma once

//선생님은 생략된 것들도 명시적으로 칠 것이다
//직접 만들지 않아도 자동으로 생략되어 생성되 있는것들

//설명 : 
class ConsoleObject1
{
public:
	//디폴트 생성자
	ConsoleObject1();
	//디폴트 소멸자
	~ConsoleObject1();

	
	
	
	//======아래것들은 명시적으로 안쓰겠습니다(delete)======
	
	//디폴트 복사 생성자
	ConsoleObject1(const ConsoleObject1& _Other) = delete;
	//RValue Reference 생성자 (나중에 배울것)
	ConsoleObject1(ConsoleObject1&& _Other) noexcept = delete;
	//operater= (자기자신을 리턴하는)
	ConsoleObject1& operator=(const ConsoleObject1& _Other) = delete;
	ConsoleObject1& operator=(ConsoleObject1&& _Other) noexcept = delete;


protected:

private:

};

