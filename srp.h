#pragma once
#include <iostream>
#ifndef GUN_H_
#define GUN_H_

using std::cout;
using std::endl;

// 定义枪的接口
class Gun
{
public:
	Gun() {}
	virtual void shoot() = 0;
	virtual~Gun() {}
};

// 定义手枪
class HandGun : public Gun
{
public:
	void shoot() { cout << "手枪射击" << endl; }
};

// 定义狙击步枪
class Rifle : public Gun
{
public:
	void shoot() { cout << "狙击步枪射击" << endl; }
};

// 定义机枪
class MachineGun : public Gun
{
public:
	void shoot() { cout << "机枪扫射" << endl; }
};

// 定义玩具接口
class Toy
{
public:
	Toy() {}
	virtual void getShape() = 0;
	virtual void getSound() = 0;
	virtual~Toy() {}
};

// 定义玩具枪
class ToyGun : public Toy
{
public:
	void getShape() { cout << "玩具枪的形状是这样的" << endl; }
	void getSound() { cout << "玩具枪的声音是这样的" << endl; }
};

// 定义士兵
class Solider
{
private:
	Gun * m_gun;
	Toy * m_toyGun = new ToyGun;
public:
	Solider() { m_gun = nullptr; }
	void setGun(Gun * gun) { m_gun = gun; }
	void setGun(Toy * toyGun) { m_toyGun = toyGun; }
	void killEnemy()
	{
		cout << "士兵开始杀敌" << endl;
		m_gun->shoot();
	}
	void useToyGun()
	{
		cout << "拿到玩具枪" << endl;
		m_toyGun->getShape();
		m_toyGun->getSound();
	}
};

#endif // !GUN_H_