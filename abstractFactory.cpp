//#include <iostream>
//#include "abstractFactory.h"
//
//int main()
//{
//	//创建两个工厂
//	HumanFactory * femaleFactory = new FemaleHumanFactory;
//	HumanFactory * maleFactory = new MaleHumanFactory;
//
//	//创建一个白人女性
//	Human * femaleWhiteHuman = femaleFactory->createWhiteHuman();
//	femaleWhiteHuman->getColor();
//	femaleWhiteHuman->getSex();
//	femaleWhiteHuman->talk();
//
//	//创建一个白人男性
//	Human * maleWhiteHuman = maleFactory->createWhiteHuman();
//	maleWhiteHuman->getColor();
//	maleWhiteHuman->getSex();
//	maleWhiteHuman->talk();
//
//	//创建一个黄人女性
//	Human * femaleYellowHuman = femaleFactory->createYellowHuman();
//	femaleYellowHuman->getColor();
//	femaleYellowHuman->getSex();
//	femaleYellowHuman->talk();
//
//	//创建一个黄人男性
//	Human * maleYellowHuman = maleFactory->createYellowHuman();
//	maleYellowHuman->getColor();
//	maleYellowHuman->getSex();
//	maleYellowHuman->talk();
//
//	//创建一个黑人女性
//	Human * femaleBlackHuman = femaleFactory->createBlackHuman();
//	femaleBlackHuman->getColor();
//	femaleBlackHuman->getSex();
//	femaleBlackHuman->talk();
//
//	//创建一个黑人男性
//	Human * maleBlackHuman = maleFactory->createBlackHuman();
//	maleBlackHuman->getColor();
//	maleBlackHuman->getSex();
//	maleBlackHuman->talk();
//
//	return 0;
//}