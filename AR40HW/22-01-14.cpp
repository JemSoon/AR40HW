#include <iostream>

//소문자가 대문자로 나오게끔
void ToUpper1(const char* a, char* b)
//a~z노가다 버전
{
	int count = 0;

	while (count<100)
	{
		if (a[count] == 'a')
		{
			putchar('A');
		}
		else if (a[count] == 'b')
		{
			putchar('B');
		}
		else if (a[count] == 'c')
		{
			putchar('C');
		}
		else if (a[count] == 'd')
		{
			putchar('D');
		}
		else if (a[count] == 'e')
		{
			putchar('E');
		}
		else if (a[count] == 'f')
		{
			putchar('F');
		}
		else if (a[count] == 'g')
		{
			putchar('G');
		}
		else if (a[count] == 'h')
		{
			putchar('H');
		}
		else if (a[count] == 'i')
		{
			putchar('I');
		}
		else if (a[count] == 'j')
		{
			putchar('J');
		}
		else if (a[count] == 'k')
		{
			putchar('K');
		}
		else if (a[count] == 'l')
		{
			putchar('L');
		}
		else if (a[count] == 'm')
		{
			putchar('M');
		}
		else if (a[count] == 'n')
		{
			putchar('N');
		}
		else if (a[count] == 'o')
		{
			putchar('O');
		}
		else if (a[count] == 'p')
		{
			putchar('P');
		}
		else if (a[count] == 'q')
		{
			putchar('Q');
		}
		else if (a[count] == 'r')
		{
			putchar('R');
		}
		else if (a[count] == 's')
		{
			putchar('S');
		}
		else if (a[count] == 't')
		{
			putchar('T');
		}
		else if (a[count] == 'u')
		{
			putchar('U');
		}
		else if (a[count] == 'v')
		{
			putchar('V');
		}
		else if (a[count] == 'w')
		{
			putchar('W');
		}
		else if (a[count] == 'x')
		{
			putchar('X');
		}
		else if (a[count] == 'y')
		{
			putchar('Y');
		}
		else if (a[count] == 'z')
		{
			putchar('Z');
		}

		else if (a[count] == 0)
		{
			break;
		}

		else
		{
		putchar(a[count]);
		}

		count += 1;
	}
}

void ToUpper2(const char* a, char* b)
//해당 문자의 값을 빼서..a=97 A=65 32차이
{
	int count = 0;
	
	while (count < 100)
	{
		if (a[count] > 96 && a[count] < 123)//97부터 122까지가 소문자a~z
		{
			putchar(a[count]-32);
			//빼기 32하면 대문자 됨..
			//a[count]-=32;했다가 안되서 헤맴..putchar로 설정해 줘야 하는구나..
		}

		else if (a[count] == 0)//값이 0이면 끝내
		{
			break;
		}

		else//그외(기호,숫자 등등)는 그냥 출력
		{
			putchar(a[count]);
		}

		count += 1;
	}
}

int main()
{
	//소문자가 대문자로 나오게끔

	char Text[100] = {};

	ToUpper1("covid_19 vaccine is too hurt (t-t)\n", Text);
	ToUpper2("2022year, January, 14th 3rd vaccine injeceted", Text);

	printf_s(Text);

	return 0;
}