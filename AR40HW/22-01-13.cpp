#include <iostream>

/*=======13�� ���� ���� �κ��� �����ϰ� ����ϵ��� ������ֱ�=======*/

void StringTrimRemove(const char* a, char* b)
{
    // for while if switch
    // "aaabbbcccddd";
    int count = 0;

    while (a[count]!=0) //�迭 ���� 0�� �ƴ϶�� �ݺ� ����
        {
          if (a[count] != ' ') //���� �迭 ���� ���ڰ� ���Ⱑ �ƴ϶�� �ش� �ε��� �迭�� �Է��Ѵ�
          {
              putchar(a[count]);
          }
          count += 1; //�Է� ���������� 1�� ����
        }

    return;
}

int main()
{
    char Text[10000] = { 0, };
    //Text = "a d dddd";

    StringTrimRemove("�ƹ����� �濡 ���Ŵ�", Text);
    
    // "aaabbbcccddd"
    printf_s(Text);

 
}