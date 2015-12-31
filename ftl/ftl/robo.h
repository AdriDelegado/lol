#pragma once
#ifndef ROBO_H
#define ROBO_H
#include "tripulante.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Robo : public Tripulante{

public:

	Robo();
	~Robo();

	//------GET---------

	int getHP() = 0;
	string getNome();
	int getReparador();
	int getCombatente();
	bool getOperador();
	int getExoesqueleto();
	bool getRespira();
	int getLocalizacao();
	//------SET---------
	void setHp(int newHP);
	void setReparador(int reparador);
	void setCombatente(int combatente);
	void setOperador(bool operador);
	void setExoesqueleto(int exoesqueleto);
	void setRespira(bool respira);
	void setLocalizacao(int localizacao);
	void setNome(string nome);
};

#endif