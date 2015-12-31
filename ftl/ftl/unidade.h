#pragma once
#ifndef UNIDADE_H
#define UNIDADE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Unidade
{
protected:
	int hp;
	string nome;

public:
	Unidade(int hp, string nome);
	Unidade();
	virtual ~Unidade(void);


	//------GET---------
	virtual string getNome()=0;
	virtual int getHP() = 0;
	//------SET---------
	virtual void setNome(string nome) = 0;
	virtual void setHp(int newHP) = 0;



};


#endif