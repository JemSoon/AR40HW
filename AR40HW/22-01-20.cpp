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
	//바이트 패링으로 __int64기준 8바이트로 한뭉탱이로 잡힌다
	//다만 작은 애들은 서로 자리를 나뉘어 낑겨 들어갈 수 있다
};

class Test
{

};


int main()
{
	Player NewPlayer = Player();

	std::cout << (__int64)&NewPlayer.A << std::endl;
	//둘이 4바이트 차이밖에 안난다
	std::cout << (__int64)&NewPlayer.B << std::endl;

	std::cout << (__int64)&NewPlayer.D << std::endl;

	std::cout << (__int64)&NewPlayer.E << std::endl;

	std::cout << (__int64)&NewPlayer.F << std::endl;
	//F배열은 총 40바이트
	std::cout << (__int64)&NewPlayer.G << std::endl;

	Test test = Test();
	//빈 클래스인 test는 1바이트가 나왔당

	std::cout << "빈 클래스 사이즈 : "<< sizeof(test) << std::endl;
	//즉 메모리 배치 상태가
	/*
	[A][][][] [B][B][B][B] [C][C][C][C] [C][C][C][C] [D][E][][] [][][][] 이다
	*/
}