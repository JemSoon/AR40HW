#include <iostream>

//10진법(조금 어려움) 오로지 숫자만의 경우(예외처리 없이)
int ToInt(const char* a)
{
	int count = 0;
	int b = 0;

	while (a[count]!= 0)
	{
		if (a[count] == '1')
		{
			while (a[count + 1] != 0)
			{
				b += 1 * 10;
			}
		}
		else if (a[count] == '2')
		{
			while (a[count + 1] != 0)
			{
				b += 2 * 10;
			}
		}
		else if (a[count] == '3')
		{
			while (a[count + 1] != 0)
			{
				b += 3 * 10;
			}
		}
		else if (a[count] == '4')
		{
			while (a[count + 1] != 0)
			{
				b += 4 * 10;
			}
		}
		else if (a[count] == '5')
		{
			while (a[count + 1] != 0)
			{
				b += 5 * 10;
			}
		}
		else if (a[count] == '6')
		{
			while (a[count + 1] != 0)
			{
				b += 6 * 10;
			}
		}
		else if (a[count] == '7')
		{
			while (a[count + 1] != 0)
			{
				b += 7 * 10;
			}
		}
		else if (a[count] == '8')
		{
			while (a[count + 1] != 0)
			{
				b += 8 * 10;
			}
		}
		else if (a[count] == '9')
		{
			while (a[count + 1] != 0)
			{
				b += 9 * 10;
			}
		}

		else
		{
			break;
		}
		count += 1;
	}

	return b;
}

int main()
{
	int Value = ToInt("25815");
	//숫자 25815가 vlaue에 들어가게끔

	int a = 0;
	std::cout << Value;

	return 0;
}