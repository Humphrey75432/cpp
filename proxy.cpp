//#include <iostream>
//#include "proxy.h"
//
//using std::cout;
//using std::endl;
//
//int main()
//{
//	IGamePlayer * player = new GamePlayer("уехЩ"); // Generate Game Player
//	IGamePlayer * proxy = new GamePlayerProxy(player); // Generate Game proxy
//	cout << "Game Start" << endl;
//	proxy->login("zhangSan", "12345"); // proxy login game
//	proxy->killBoss();
//	proxy->upgrade();
//	cout << "Game Over" << endl;
//	delete player;
//	delete proxy;
//	return 0;
//}