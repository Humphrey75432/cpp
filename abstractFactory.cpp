//#include <iostream>
//#include "abstractFactory.h"
//
//int main()
//{
//	//������������
//	HumanFactory * femaleFactory = new FemaleHumanFactory;
//	HumanFactory * maleFactory = new MaleHumanFactory;
//
//	//����һ������Ů��
//	Human * femaleWhiteHuman = femaleFactory->createWhiteHuman();
//	femaleWhiteHuman->getColor();
//	femaleWhiteHuman->getSex();
//	femaleWhiteHuman->talk();
//
//	//����һ����������
//	Human * maleWhiteHuman = maleFactory->createWhiteHuman();
//	maleWhiteHuman->getColor();
//	maleWhiteHuman->getSex();
//	maleWhiteHuman->talk();
//
//	//����һ������Ů��
//	Human * femaleYellowHuman = femaleFactory->createYellowHuman();
//	femaleYellowHuman->getColor();
//	femaleYellowHuman->getSex();
//	femaleYellowHuman->talk();
//
//	//����һ����������
//	Human * maleYellowHuman = maleFactory->createYellowHuman();
//	maleYellowHuman->getColor();
//	maleYellowHuman->getSex();
//	maleYellowHuman->talk();
//
//	//����һ������Ů��
//	Human * femaleBlackHuman = femaleFactory->createBlackHuman();
//	femaleBlackHuman->getColor();
//	femaleBlackHuman->getSex();
//	femaleBlackHuman->talk();
//
//	//����һ����������
//	Human * maleBlackHuman = maleFactory->createBlackHuman();
//	maleBlackHuman->getColor();
//	maleBlackHuman->getSex();
//	maleBlackHuman->talk();
//
//	return 0;
//}