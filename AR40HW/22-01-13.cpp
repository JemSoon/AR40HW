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

int main()
{
    char Text[10000] = { 0, };
    //Text = "a d dddd";

    StringTrimRemove("아버지가 방에 들어가신다", Text);
    
    // "aaabbbcccddd"
    printf_s(Text);

 
}