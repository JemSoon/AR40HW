#pragma once

//�������� ������ �͵鵵 ��������� ĥ ���̴�
//���� ������ �ʾƵ� �ڵ����� �����Ǿ� ������ �ִ°͵�

//���� : 
class GameBlock
{
public:
	//����Ʈ ������
	GameBlock();
	//����Ʈ �Ҹ���
	~GameBlock();

	
	
	
	//======�Ʒ��͵��� ��������� �Ⱦ��ڽ��ϴ�(delete)======
	
	//����Ʈ ���� ������
	GameBlock(const GameBlock& _Other) = delete;
	//RValue Reference ������ (���߿� ����)
	GameBlock(GameBlock&& _Other) noexcept = delete;
	//operater= (�ڱ��ڽ��� �����ϴ�)
	GameBlock& operator=(const GameBlock& _Other) = delete;
	GameBlock& operator=(GameBlock&& _Other) noexcept = delete;


protected:

private:

};

