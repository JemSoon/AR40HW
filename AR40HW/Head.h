#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class Head
{
public:
	//����Ʈ ������
	Head();
	//����Ʈ �Ҹ���
	~Head();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	Head(const Head& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	Head(Head&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;


protected:

private:

};

