#include <iostream>

class Player
{
public:
	char	A;
	int		B;
	__int64 C;
	char	D;
	char	E;
	int		F[10];
	char	G;
	//����Ʈ �и����� __int64���� 8����Ʈ�� �ѹ����̷� ������
	//�ٸ� ���� �ֵ��� ���� �ڸ��� ������ ���� �� �� �ִ�
};

class Test
{

};


int main()
{
	Player NewPlayer = Player();

	std::cout << (__int64)&NewPlayer.A << std::endl;
	//���� 4����Ʈ ���̹ۿ� �ȳ���
	std::cout << (__int64)&NewPlayer.B << std::endl;

	std::cout << (__int64)&NewPlayer.D << std::endl;

	std::cout << (__int64)&NewPlayer.E << std::endl;

	std::cout << (__int64)&NewPlayer.F << std::endl;
	//F�迭�� �� 40����Ʈ
	std::cout << (__int64)&NewPlayer.G << std::endl;

	Test test = Test();
	//�� Ŭ������ test�� 1����Ʈ�� ���Դ�

	std::cout << "�� Ŭ���� ������ : "<< sizeof(test) << std::endl;
	//�� �޸� ��ġ ���°�
	/*
	[A][][][] [B][B][B][B] [C][C][C][C] [C][C][C][C] [D][E][][] [][][][] �̴�
	*/
}