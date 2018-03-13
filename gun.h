#pragma once
#include <iostream>
#ifndef GUN_H_
#define FUN_H_
// Define weapon
class Gun
{
public:
	virtual void shoot() = 0; //´¿Ðé·½·¨
};

class HandGun : public Gun
{
public:
	void shoot() { std::cout << "ÊÖÇ¹Éä»÷..." << std::endl; }
};

class Rifle : public Gun
{
public:
	void shoot() { std::cout << "¾Ñ»÷²½Ç¹Éä»÷..." << std::endl; }
};

class MachineGun : public Gun
{
public:
	void shoot() { std::cout << "»úÇ¹Éä»÷..." << std::endl; }
};

class Solider
{
private:
	Gun * m_gun;
public:
	Solider(Gun & gun) : m_gun(&gun) {}
	void killEnemy()
	{
		std::cout << "Ê¿±ø¿ªÊ¼»÷É±µÐÈË" << std::endl;
		m_gun->shoot();
	}
};
#endif
