// HomeWork220126.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//++,--���۷����� �����

#include <iostream>

class MyInt //Ŭ������
{
public:
    int Value;

public:
    MyInt& operator++(const MyInt& _Value)
    {
        _Value =_Value +1 ;

        return *this;
    }
    //MyInt operator++(int);

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
    int Value = 0; 
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;//����
    MyInt MyResult = 0;//����

    // ++ ����������
    //MyResult = ++MyValue;

    int a = 0;
    //MyResult = 0;
    //MyResult = MyValue++;
}

