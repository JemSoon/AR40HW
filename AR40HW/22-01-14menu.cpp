#include <iostream>

//�����Ҷ� �ѹ����� �ϳ��� cpp�� ������..��


//10����(���� �����) ������ ���ڸ��� ���(����ó�� ����)
int ToInt(const char* a)
{

}

// �� �����Ŵ�.
void CharChange(char* _Text, char _Prev, char _Next)
{

}

void Rervers(const char* _Sorce, char* _Result)
{

}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{

}

//�������� ���ڴ�?
void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

}

int main()
{


	{
		int Value = ToInt("25815");
		//���� 25815�� vlaue�� ���Բ�

		int a = 0;
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd	(,�� |�� �ٲ۴�)

		printf_s(Text);
	}

	{
		char Text[100] = { };
		Rervers("0123456789", Text);
		//9876543210���� �����Բ�
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"�� �������� �ε���[2]~�ε���[7] ������
	}

	{
		// �̰� ���� ���ϼŵ� �˴ϴ�.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		//aa�� fff�� �ٲٰ� �ϴ°�(�迭 ������ ���� �ٸ�..)
		printf_s(Text);
	}

	return 0;
}