//숙제 : operator()()정의 알아오기

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

	//솔직하게 검색하고 검색을 토대로 만든거라
	//원리를 이해하고 만든게 아니라 그냥 보고 만든 수준입니다..
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