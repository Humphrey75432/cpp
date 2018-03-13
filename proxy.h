#pragma once
#include <iostream>
#include <string>
#ifndef PROXY_H_
#define PROXY_H_

using std::string;
using std::cout;
using std::endl;

// 定义玩家接口
class IGamePlayer
{
public:
	IGamePlayer() {} // 默认构造函数
	virtual void login(const string & user, const string & password) = 0; // Pure virtual method
	virtual void killBoss() = 0; // Pure virtual method
	virtual void upgrade() = 0; // Pure virtual method
	virtual~IGamePlayer() {} //虚析构函数（Destructor），释放对象用的
};

// 定义玩家
class GamePlayer : public IGamePlayer
{
private:
	string m_strName;
public:
	GamePlayer(const string & name) : m_strName(name) {} // Overload Constructor
	void login(const string & user, const string & password)
	{
		cout << "登录名为" << user << "的用户，" << this->m_strName << "登录成功" << endl;
	}
	void killBoss() { cout << this->m_strName << "在打怪" << endl; }
	void upgrade() { cout << this->m_strName << "升了一级" << endl; }
};

// 定义代理玩家
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