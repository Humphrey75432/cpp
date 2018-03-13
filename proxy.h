#pragma once
#include <iostream>
#include <string>
#ifndef PROXY_H_
#define PROXY_H_

using std::string;
using std::cout;
using std::endl;

// ������ҽӿ�
class IGamePlayer
{
public:
	IGamePlayer() {} // Ĭ�Ϲ��캯��
	virtual void login(const string & user, const string & password) = 0; // Pure virtual method
	virtual void killBoss() = 0; // Pure virtual method
	virtual void upgrade() = 0; // Pure virtual method
	virtual~IGamePlayer() {} //������������Destructor�����ͷŶ����õ�
};

// �������
class GamePlayer : public IGamePlayer
{
private:
	string m_strName;
public:
	GamePlayer(const string & name) : m_strName(name) {} // Overload Constructor
	void login(const string & user, const string & password)
	{
		cout << "��¼��Ϊ" << user << "���û���" << this->m_strName << "��¼�ɹ�" << endl;
	}
	void killBoss() { cout << this->m_strName << "�ڴ��" << endl; }
	void upgrade() { cout << this->m_strName << "����һ��" << endl; }
};

// ����������
class GamePlayerProxy : public IGamePlayer
{
private:
	IGamePlayer * m_ptrGameplayer = nullptr;
public:
	GamePlayerProxy(IGamePlayer * gamePlayer) : m_ptrGameplayer(gamePlayer) {} // Overload Constructor
	void login(const string & user, const string & password) { this->m_ptrGameplayer->login(user, password); }
	void killBoss() { this->m_ptrGameplayer->killBoss(); }
	void upgrade() { this->m_ptrGameplayer->upgrade(); }
};

#endif // !PROXY_H_