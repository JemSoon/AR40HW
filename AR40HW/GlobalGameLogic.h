#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class GlobalGameLogic
{
public:
	//����Ʈ ������
	GlobalGameLogic();
	//����Ʈ �Ҹ���
	~GlobalGameLogic();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	GlobalGameLogic(const GlobalGameLogic& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	GlobalGameLogic(GlobalGameLogic&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	GlobalGameLogic& operator=(const GlobalGameLogic& _Other) = delete;
	GlobalGameLogic& operator=(GlobalGameLogic&& _Other) noexcept = delete;


protected:

private:

};

