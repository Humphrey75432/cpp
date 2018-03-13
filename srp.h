#pragma once
#include <iostream>
#ifndef GUN_H_
#define GUN_H_

using std::cout;
using std::endl;

// ����ǹ�Ľӿ�
class Gun
{
public:
	Gun() {}
	virtual void shoot() = 0;
	virtual~Gun() {}
};

// ������ǹ
class HandGun : public Gun
{
public:
	void shoot() { cout << "��ǹ���" << endl; }
};

// ����ѻ���ǹ
class Rifle : public Gun
{
public:
	void shoot() { cout << "�ѻ���ǹ���" << endl; }
};

// �����ǹ
class MachineGun : public Gun
{
public:
	void shoot() { cout << "��ǹɨ��" << endl; }
};

// ������߽ӿ�
class Toy
{
public:
	Toy() {}
	virtual void getShape() = 0;
	virtual void getSound() = 0;
	virtual~Toy() {}
};

// �������ǹ
class ToyGun : public Toy
{
public:
	void getShape() { cout << "���ǹ����״��������" << endl; }
	void getSound() { cout << "���ǹ��������������" << endl; }
};

// ����ʿ��
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
		cout << "ʿ����ʼɱ��" << endl;
		m_gun->shoot();
	}
	void useToyGun()
	{
		cout << "�õ����ǹ" << endl;
		m_toyGun->getShape();
		m_toyGun->getSound();
	}
};

#endif // !GUN_H_