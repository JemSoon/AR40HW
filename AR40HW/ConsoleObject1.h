#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class ConsoleObject1
{
public:
	//����Ʈ ������
	ConsoleObject1();
	//����Ʈ �Ҹ���
	~ConsoleObject1();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	ConsoleObject1(const ConsoleObject1& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	ConsoleObject1(ConsoleObject1&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	ConsoleObject1& operator=(const ConsoleObject1& _Other) = delete;
	ConsoleObject1& operator=(ConsoleObject1&& _Other) noexcept = delete;


protected:

private:

};

