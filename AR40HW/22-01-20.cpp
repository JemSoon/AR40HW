#include <iostream>

class Player
{
public:
	char	A;
	int		B;
	__int64 C;
	char	D;
	char	E;
	//����Ʈ �и����� __int64���� 8����Ʈ�� �ѹ����̷� ������
	//�ٸ� ���� �ֵ��� ���� �ڸ��� ������ ���� �� �� �ִ�
};



int main()
{
	Player NewPlayer = Player();

	std::cout << (__int64)&NewPlayer.A << std::endl;
	//���� 4����Ʈ ���̹ۿ� �ȳ���
	std::cout << (__int64)&NewPlayer.B << std::endl;

	std::cout << (__int64)&NewPlayer.D << std::endl;

	std::cout << (__int64)&NewPlayer.E << std::endl;
	//�� �޸� ��ġ ���°�
	/*
	[A][][][] [B][B][B][B] [C][C][C][C] [C][C][C][C] [D][E][][] [][][][] �̴�
	*/
}