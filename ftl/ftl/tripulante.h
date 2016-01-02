#pragma once
#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include "unidade.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tripulante : public Unidade{
protected:
	int localizacao;
	int reparador;
	int combatente;
	bool operador;
	int exoesqueleto;
	bool respira;
public:
	Tripulante(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, int localizacao, string nome, int id);
	Tripulante();
	~Tripulante();

	//------GET---------
	int getId();
	int getIdSala();
	int getHP();
	string getNome();

	virtual int getReparador() = 0;
	virtual int getCombatente() = 0;
	virtual bool getOperador() = 0;
	virtual int getExoesqueleto() = 0;
	virtual	bool getRespira() = 0;
	virtual int getLocalizacao() = 0;
	//------SET---------
	void setId(int id);
	void setIdSala(int NidSala);
	void setNome(string nome);
	void setHP(int hp);

	virtual void setReparador(int reparador) = 0;
	virtual void setCombatente(int combatente) = 0;
	virtual void setOperador(bool operador) = 0;
	virtual void setExoesqueleto(int exoesqueleto) = 0;
	virtual	void setRespira(bool respira) = 0;
	virtual void setLocalizacao(int localizacao) = 0;
	
};



#endif