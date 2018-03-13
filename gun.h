#pragma once
#include <iostream>
#ifndef GUN_H_
#define FUN_H_
// Define weapon
class Gun
{
public:
	virtual void shoot() = 0; //���鷽��
};

class HandGun : public Gun
{
public:
	void shoot() { std::cout << "��ǹ���..." << std::endl; }
};

class Rifle : public Gun
{
public:
	void shoot() { std::cout << "�ѻ���ǹ���..." << std::endl; }
};

class MachineGun : public Gun
{
public:
	void shoot() { std::cout << "��ǹ���..." << std::endl; }
};

class Solider
{
private:
	Gun * m_gun;
public:
	Solider(Gun & gun) : m_gun(&gun) {}
	void killEnemy()
	{
		std::cout << "ʿ����ʼ��ɱ����" << std::endl;
		m_gun->shoot();
	}
};
#endif
