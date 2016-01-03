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
	int idSala; //sala onde esta a unidade
	int id;

public:
	Unidade(int hp, string nome, int id);
	Unidade();
	virtual ~Unidade(void);


	//------GET---------
	virtual int getId() = 0;
	virtual string getNome()=0;
	virtual int getHP() = 0;
	virtual int getIdSala() = 0;
	//------SET---------
	virtual void setId(int id) = 0;
	virtual void setNome(string nome) = 0;
	virtual void setHp(int newHP) = 0;
	virtual void setIdSala(int NidSala) = 0;



};


#endif