#pragma once
#include <iostream>
#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_

using std::cout;
using std::endl;

//抽象产品（接口）
class Human
{
public:
	Human() {}
	virtual void getColor() = 0;
	virtual void getSex() = 0;
	virtual void talk() = 0;
	virtual~Human() {}
};

//具体产品
class WhiteHuman : public Human
{
public:
	void getColor() { cout << "白人的皮肤是白色的" << endl; }
	void talk() { cout << "白人说话一般是单字节的，听得懂" << endl; }
	virtual void getSex() = 0;
};

//白人
class FemaleWhiteHuman : public WhiteHuman
{
public:
	void getSex() { cout << "白人女性" << endl; }
};

class MaleWhiteHuman : public WhiteHuman
{
public:
	void getSex() { cout << "白人男性" << endl; }
};

class YellowHuman : public Human
{
public:
	void getColor() { cout << "黄人的皮肤是黄色的" << endl; }
	void talk() { cout << "黄人说话一般是双字节的，听得懂" << endl; }
	virtual void getSex() = 0;
};

//黄人
class FemaleYellowHuman : public YellowHuman
{
public:
	void getSex() { cout << "黄人女性" << endl; }
};

class MaleYellowHuman : public YellowHuman
{
public:
	void getSex() { cout << "黄人男性" << endl; }
};

class BlackHuman : public Human
{
public:
	void getColor() { cout << "黑人的皮肤是黑色的" << endl; }
	void talk() { cout << "黑人说话一般人听不懂" << endl; }
	virtual void getSex() = 0;
};

//黑人
class FemaleBlackHuman : public BlackHuman
{
public:
	void getSex() { cout << "黑人女性" << endl; }
};

class MaleBlackHuman : public BlackHuman
{
public:
	void getSex() { cout << "黑人男性" << endl; }
};

//抽象工厂（接口）
class HumanFactory
{
public:
	HumanFactory() {}
	virtual Human * createWhiteHuman() = 0;
	virtual Human * createYellowHuman() = 0;
	virtual Human * createBlackHuman() = 0;
	virtual~HumanFactory() {}
};

//具体工厂
class MaleHumanFactory : public HumanFactory
{
public:
	Human * createWhiteHuman() { return new MaleWhiteHuman; }
	Human * createYellowHuman() { return new MaleYellowHuman; }
	Human * createBlackHuman() { return new MaleBlackHuman; }
};

class FemaleHumanFactory : public HumanFactory
{
public:
	Human * createWhiteHuman() { return new FemaleWhiteHuman; }
	Human * createYellowHuman() { return new FemaleYellowHuman; }
	Human * createBlackHuman() { return new FemaleBlackHuman; }
};

#endif // !ABSTRACT_FACTORY_H_