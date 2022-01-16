#include <iostream>

//숙제할땐 한문제당 하나의 cpp로 각개로..★


//10진법(조금 어려움) 오로지 숫자만의 경우(예외처리 없이)
int ToInt(const char* a)
{

}

// 좀 어려울거다.
void CharChange(char* _Text, char _Prev, char _Next)
{

}

void Rervers(const char* _Sorce, char* _Result)
{

}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{

}

//가능한지 모루겠다?
void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

}

int main()
{


	{
		int Value = ToInt("25815");
		//숫자 25815가 vlaue에 들어가게끔

		int a = 0;
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd	(,를 |로 바꾼다)

		printf_s(Text);
	}

	{
		char Text[100] = { };
		Rervers("0123456789", Text);
		//9876543210으로 나오게끔
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"만 나오도록 인덱스[2]~인덱스[7] 범위만
	}

	{
		// 이건 질문 안하셔도 됩니다.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		//aa를 fff로 바꾸게 하는것(배열 개수도 각자 다름..)
		printf_s(Text);
	}

	return 0;
}