// HomeWork220126.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//++,--���۷����� �����

#include <iostream>

class MyInt //Ŭ������
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
    MyInt(int _Value) //������ �� �ʱ�ȭ
        : Value(_Value)
    {
        
    }

};

//���� this�� ���۷����� ����(����?)�� �� ���� ���Ѱ� �����ϴ� ���� �����غ��� �ٽ�
//����� ���ڽ��ϴ� �Ф�

int main()
{
    int Value = 10; 
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 10;//����
    MyInt MyResult = 0;//����

    // ++ ����������
    MyResult = ++MyValue;

    int a = 0;
    //MyResult = 0;
    //MyResult = MyValue++;
}

