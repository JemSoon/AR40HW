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

//�̰� for����
void StringTrimRemove2(const char* a, char* b)
{
 
    for (int i = 0; i < 10000; ++i)
    {
        if (a[i] != ' ')
        {
            putchar(a[i]);
        }
        if (a[i] == 0) //���� ���ٸ� �ݺ��� ��ӵ����� ���� ���߰� ���´�
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

    StringTrimRemove("�ƹ����� �濡 ���Ŵ�\n", Text);

    StringTrimRemove2("���� ��������� ���� ����� �³� �ʹ�\n", Text);
    
    // "aaabbbcccddd"
    printf_s(Text);

}