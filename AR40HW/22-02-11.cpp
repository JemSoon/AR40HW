//���� : operator()()���� �˾ƿ���

#include <iostream>

class A
{
private:
	int a;
	int b;
	
public:
	A(int x = 0, int y = 0) : a(x),b(y)
	{}

public:

	//�����ϰ� �˻��ϰ� �˻��� ���� ����Ŷ�
	//������ �����ϰ� ����� �ƴ϶� �׳� ���� ���� �����Դϴ�..
	int operator()(const int& _N1, const int& _N2)
	{
		return _N1 + _N2;
	}
	
};


int main()
{
	A test;

	test(1, 5);

	int a = 0;
}