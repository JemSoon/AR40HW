#include <iostream>

/*=======13일 숙제 띄어쓰기 부분을 생략하고 출력하도록 만들어주기=======*/

void StringTrimRemove(const char* a, char* b)
{
    // for while if switch
    // "aaabbbcccddd";
    int count = 0;

    while (a[count]!=0) //배열 값이 0이 아니라면 반복 진행
        {
          if (a[count] != ' ') //만약 배열 안의 문자가 띄어쓰기가 아니라면 해당 인덱스 배열에 입력한다
          {
              putchar(a[count]);
          }
          count += 1; //입력 끝낼때마다 1씩 증가
        }

    return;
}

//이건 for문형
void StringTrimRemove2(const char* a, char* b)
{
 
    for (int i = 0; i < 10000; ++i)
    {
        if (a[i] != ' ')
        {
            putchar(a[i]);
        }
        if (a[i] == 0) //값이 없다면 반복문 계속돌리지 말고 멈추고 나온다
        {
            break;
        }
    }

    return;
}

int main()
{
    char Text[10000] = {0,};
    //Text = "a d dddd";

    StringTrimRemove("아버지가 방에 들어가신다\n", Text);

    StringTrimRemove2("내가 만들었지만 내가 만든게 맞나 싶다\n", Text);
    
    // "aaabbbcccddd"
    printf_s(Text);

}