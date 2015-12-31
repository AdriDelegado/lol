#pragma once
#ifndef COMANDO_H
#define COMANDO_H
#include <iostream>
#include <string>

using namespace std;
class Comando
{
	string arg1, arg2, arg3, arg4, arg5;
public:
	Comando(string arg1, string arg2, string arg3, string arg4, string arg5);
	Comando();
	void setArg1(string sub);
	void setArg2(string sub);
	void setArg3(string sub);
	void setArg4(string sub);
	
	string getArg1();
	string getArg2();
	string getArg3();
	string getArg4();
	
	~Comando(void);
};

#endif