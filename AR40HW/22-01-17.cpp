#include <iostream>

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int count = 0; //���°���� ī��Ʈ�� ����

    for (int i = 0; i < 100; ++i) //�׳� �ݺ��������..100�� �ǹ̾���..
    {
        if (_Text[i+_Start]=='e')//���� i��°+�������� �ε��� �迭�� ����'e'���
        {
            if (_Text[i + 1 + _Start] == 'e')//�׸��� �� �������ڵ� 'e'���
            {
                if (_Text[i + 2 + _Start] == 'e')//�׸��� �ױ� �������ڵ� 'e'���
                {
                    count = i;//�������ڿ��� ���°���� �����ϴ� ������ �װ� ����
                }

                else//���� 'e'�� �ƴϸ� ���������� ��������
                {
                    break;
                }
            }
        }
    }

    return count;//���° �����ϴ� �������� ��ȯ��
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int count2 = 0; //���°���� ī��Ʈ�� ����
    int End = 0;//�ش� ������ ������ �ε�����ȣ ����

    for (int i = 0; i < 100; ++i) //�׳� �ݺ��������..100�� �ǹ̾���..
    {
        if (_Text[i] == 0)//i��° �ε����� ����0(��)�̶��
        {
            End = i+1;//End�� i���� �־��ش�

            break;
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        if (_Text[End - _End - i] == 'e')//���� ������-��������-i��° �ε��� �迭�� ����'e'���
        {
            if (_Text[End - _End - i - 1] == 'e')//�׸��� �� �������ڵ� 'e'���
            {
                if (_Text[End - _End - i - 2] == 'e')//�׸��� �ױ� �������ڵ� 'e'���
                {
                    count2 = i;//�������ڿ��� ���°���� �����ϴ� ������ �װ� ����
                }

                else//���� 'e'�� �ƴϸ� ���������� ��������
                {
                    break;
                }
            }
        }
    }

    return count2;//���° �����ϴ� �������� ��ȯ��
}


int main()
{
    {
        int Count1 = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");

        std::cout << Count1 << std::endl; //Ȯ�ο� ��� �ڵ�
    }

    {
        int Count2 = CountLast("aaa eee asdfasd eee", 5, "eee");

        std::cout << Count2 << std::endl;
    }

    //CountLast�� ���� �򰥸��ϴ� �Ųٷ� �����ϴٺ���..����� �ε��� ����Ѱ��� �ñ��մϴ�..

}