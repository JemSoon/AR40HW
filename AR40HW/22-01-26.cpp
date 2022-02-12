// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//++,--오퍼레이터 만들기

#include <iostream>

class MyInt //클래스명
{
public:
    int Value=0;

public:
    MyInt& operator++(int _Value)
    {
        Value = (Value + _Value) + 1;

        return *this;
    }
    
    MyInt operator++()
    {
        Value = Value + 1;
        return Value;
    }

public:
    MyInt(int _Value) //생성자 및 초기화
        : Value(_Value)
    {
        
    }

};

//제가 this와 오퍼레이터 구조(인자?)를 잘 이해 못한거 같습니다 좀더 복습해보고 다시
//만들어 보겠습니다 ㅠㅠ

int main()
{
    int Value = 10; 
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 10;//선언
    MyInt MyResult = 0;//선언

    // ++ 쓰지마세요
    MyResult = ++MyValue;

    int a = 0;
    //MyResult = 0;
    //MyResult = MyValue++;
}

