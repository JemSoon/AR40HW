#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class ConsoleScreen1
{
public:
	//����Ʈ ������
	ConsoleScreen1();
	//����Ʈ �Ҹ���
	~ConsoleScreen1();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	ConsoleScreen1(const ConsoleScreen1& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	ConsoleScreen1(ConsoleScreen1&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	ConsoleScreen1& operator=(const ConsoleScreen1& _Other) = delete;
	ConsoleScreen1& operator=(ConsoleScreen1&& _Other) noexcept = delete;


protected:

private:

};

