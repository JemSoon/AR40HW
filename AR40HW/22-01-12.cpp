#include <iostream>

//2022년 01월 12일 숙제 while문을 이용한 각 배열에 짝수 홀수로 다 넣어주기(0제외)

int main()
{
	int Arr[10] = {};
	int number1 = 0;

	std::cout << "==========짝수 배열 10개 입력==========" << std::endl;
	while (number1<20)
	{
		number1 = 2;
		for (int i = 0; i < 10; ++i)
		{
			Arr[i] = number1;
			std::cout << Arr[i] << "\t";
			number1 += 2;
		}

	}
	std::cout << std::endl;

	std::cout << "==========홀수 배열 10개 입력==========" << std::endl;
	number1 = 1;
	while (number1 < 20)
	{
		for (int i = 0; i < 10; ++i)
		{
			Arr[i] = number1;
			std::cout << Arr[i] << "\t";
			number1 += 2;
		}

	}
	std::cout << std::endl;
	std::cout << "==========1월 12일 숙제 끝==========" << std::endl;
	return 0;
}
