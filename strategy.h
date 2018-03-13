#pragma once
#ifndef STRATEGY_H_
#define STRATEGY_H_

#include <iostream>

//定义一个策略接口
class Strategy
{
public:
	Strategy() {}
	virtual void operate() = 0; //纯虚函数
	virtual ~Strategy() {} //虚析构函数
};

//定义第一个策略
class BackDoor : public Strategy
{
public:
	void operate() { std::cout << "走后门" << std::endl; }
};

//定义第二个策略
class GivenGreenLight : public Strategy
{
public:
	void operate() { std::cout << "开绿灯" << std::endl; }
};

//定义第三个策略
class BlockEnemy : public Strategy
{
public:
	void operate() { std::cout << "阻挡追兵" << std::endl; }
};

//定义安排者
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