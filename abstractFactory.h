#pragma once
#include <iostream>
#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_

using std::cout;
using std::endl;

//�����Ʒ���ӿڣ�
class Human
{
public:
	Human() {}
	virtual void getColor() = 0;
	virtual void getSex() = 0;
	virtual void talk() = 0;
	virtual~Human() {}
};

//�����Ʒ
class WhiteHuman : public Human
{
public:
	void getColor() { cout << "���˵�Ƥ���ǰ�ɫ��" << endl; }
	void talk() { cout << "����˵��һ���ǵ��ֽڵģ����ö�" << endl; }
	virtual void getSex() = 0;
};

//����
class FemaleWhiteHuman : public WhiteHuman
{
public:
	void getSex() { cout << "����Ů��" << endl; }
};

class MaleWhiteHuman : public WhiteHuman
{
public:
	void getSex() { cout << "��������" << endl; }
};

class YellowHuman : public Human
{
public:
	void getColor() { cout << "���˵�Ƥ���ǻ�ɫ��" << endl; }
	void talk() { cout << "����˵��һ����˫�ֽڵģ����ö�" << endl; }
	virtual void getSex() = 0;
};

//����
class FemaleYellowHuman : public YellowHuman
{
public:
	void getSex() { cout << "����Ů��" << endl; }
};

class MaleYellowHuman : public YellowHuman
{
public:
	void getSex() { cout << "��������" << endl; }
};

class BlackHuman : public Human
{
public:
	void getColor() { cout << "���˵�Ƥ���Ǻ�ɫ��" << endl; }
	void talk() { cout << "����˵��һ����������" << endl; }
	virtual void getSex() = 0;
};

//����
class FemaleBlackHuman : public BlackHuman
{
public:
	void getSex() { cout << "����Ů��" << endl; }
};

class MaleBlackHuman : public BlackHuman
{
public:
	void getSex() { cout << "��������" << endl; }
};

//���󹤳����ӿڣ�
class HumanFactory
{
public:
	HumanFactory() {}
	virtual Human * createWhiteHuman() = 0;
	virtual Human * createYellowHuman() = 0;
	virtual Human * createBlackHuman() = 0;
	virtual~HumanFactory() {}
};

//���幤��
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