#include <iostream>

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int count = 0; //몇번째인지 카운트용 변수

    for (int i = 0; i < 100; ++i) //그냥 반복돌리기용..100은 의미없음..
    {
        if (_Text[i+_Start]=='e')//만약 i번째+지정숫자 인덱스 배열에 값이'e'라면
        {
            if (_Text[i + 1 + _Start] == 'e')//그리고 그 다음숫자도 'e'라면
            {
                if (_Text[i + 2 + _Start] == 'e')//그리고 그그 다음숫자도 'e'라면
                {
                    count = i;//지정숫자에서 몇번째에서 시작하는 값인지 그걸 대입
                }

                else//값이 'e'가 아니면 돌리지말고 빠져나와
                {
                    break;
                }
            }
        }
    }

    return count;//몇번째 시작하는 값인지를 반환해
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int count2 = 0; //몇번째인지 카운트용 변수
    int End = 0;//해당 글자의 마지막 인덱스번호 변수

    for (int i = 0; i < 100; ++i) //그냥 반복돌리기용..100은 의미없음..
    {
        if (_Text[i] == 0)//i번째 인덱스의 값이0(끝)이라면
        {
            End = i+1;//End에 i값을 넣어준다

            break;
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        if (_Text[End - _End - i] == 'e')//만약 마지막-지정숫자-i번째 인덱스 배열에 값이'e'라면
        {
            if (_Text[End - _End - i - 1] == 'e')//그리고 그 다음숫자도 'e'라면
            {
                if (_Text[End - _End - i - 2] == 'e')//그리고 그그 다음숫자도 'e'라면
                {
                    count2 = i;//지정숫자에서 몇번째에서 시작하는 값인지 그걸 대입
                }

                else//값이 'e'가 아니면 돌리지말고 빠져나와
                {
                    break;
                }
            }
        }
    }

    return count2;//몇번째 시작하는 값인지를 반환해
}


int main()
{
    {
        int Count1 = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");

        std::cout << Count1 << std::endl; //확인용 출력 코드
    }

    {
        int Count2 = CountLast("aaa eee asdfasd eee", 5, "eee");

        std::cout << Count2 << std::endl;
    }

    //CountLast가 조금 헷갈립니다 거꾸로 세야하다보니..제대로 인덱스 계산한건지 궁금합니다..

}