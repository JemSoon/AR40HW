#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class CosoleRandom
{
public:
	//����Ʈ ������
	CosoleRandom();
	//����Ʈ �Ҹ���
	~CosoleRandom();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	CosoleRandom(const CosoleRandom& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	CosoleRandom(CosoleRandom&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	CosoleRandom& operator=(const CosoleRandom& _Other) = delete;
	CosoleRandom& operator=(CosoleRandom&& _Other) noexcept = delete;


protected:

private:

};

