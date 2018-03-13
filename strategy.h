#pragma once
#ifndef STRATEGY_H_
#define STRATEGY_H_

#include <iostream>

//����һ�����Խӿ�
class Strategy
{
public:
	Strategy() {}
	virtual void operate() = 0; //���麯��
	virtual ~Strategy() {} //����������
};

//�����һ������
class BackDoor : public Strategy
{
public:
	void operate() { std::cout << "�ߺ���" << std::endl; }
};

//����ڶ�������
class GivenGreenLight : public Strategy
{
public:
	void operate() { std::cout << "���̵�" << std::endl; }
};

//�������������
class BlockEnemy : public Strategy
{
public:
	void operate() { std::cout << "�赲׷��" << std::endl; }
};

//���尲����
class Context
{
private:
	Strategy * m_strategy;
public:
	Context() {} // Default Constructor
	Context(Strategy & strategy) : m_strategy(&strategy) {} // Overload Constructor
	void operate() { m_strategy->operate(); }
};
#endif // !STRATEGY_H_