#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class ConsoleMath1
{
public:
	//����Ʈ ������
	ConsoleMath1();
	//����Ʈ �Ҹ���
	~ConsoleMath1();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	ConsoleMath1(const ConsoleMath1& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	ConsoleMath1(ConsoleMath1&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	ConsoleMath1& operator=(const ConsoleMath1& _Other) = delete;
	ConsoleMath1& operator=(ConsoleMath1&& _Other) noexcept = delete;


protected:

private:

};

