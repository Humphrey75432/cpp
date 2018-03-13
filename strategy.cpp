//#include "strategy.h"
//#include <iostream>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Context * context = nullptr; //We often use nullptr symbol to represent null pointer in C++11
//
//	cout << "打开第一个锦囊" << endl;
//	BackDoor backDoor; //创建第一个策略
//	context = new Context(backDoor);
//	context->operate();
//	
//	cout << "打开第二个锦囊" << endl;
//	GivenGreenLight givenGreenLight; //创建第二个策略
//	context = new Context(givenGreenLight);
//	context->operate();
//
//	cout << "打开第三个锦囊" << endl;
//	BlockEnemy blockEnemy; //创建第三个策略
//	context = new Context(blockEnemy);
//	context->operate();
//
//	return 0;
//}
