#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class Body
{
public:
	//����Ʈ ������
	Body();
	//����Ʈ �Ҹ���
	~Body();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	Body(const Body& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	Body(Body&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;


protected:

private:

};

