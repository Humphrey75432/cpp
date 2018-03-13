#pragma once
#include <iostream>
#include <string>

#ifndef FACADE_H_
#define FACADE_H_

using std::cout;
using std::endl;
using std::string;

class LetterProcess
{
public:
	LetterProcess() {}
	virtual void writeContext(string & context) = 0;
	virtual void fillEnvelope(string & address) = 0;
	virtual void letterIntoEnvelope() = 0;
	virtual void sendLetter() = 0;
	virtual~LetterProcess() {}
};

class LetterProcessImpl : public LetterProcess
{
public:
	void writeContext(string & context) { cout << "��д�ŵ�����..." << context << endl; }
	void fillEnvelope(string & address) { cout << "��д�ŵĵ�ַ..." << address << endl; }
	void letterIntoEnvelope() { cout << "���ŷ����ŷ�" << endl; }
	void sendLetter() { cout << "�����ż�" << endl; }
};

//������
class ModernPostOffice
{
private:
	LetterProcess * letterProcess = new LetterProcessImpl;
public:
	void sendLetter(string & context, string & address)
	{
		letterProcess->writeContext(context);
		letterProcess->fillEnvelope(address);
		letterProcess->letterIntoEnvelope();
		letterProcess->sendLetter();
	}
};

#endif // !FACADE_H_