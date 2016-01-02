#pragma once
#ifndef CAMISAVERMELHA_H
#define CAMISAVERMELHA_H
#include "tripulante.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CamisaVermelha : public Tripulante{

	public:
		
		CamisaVermelha();
		~CamisaVermelha();

	//------GET---------

	int getHP();
	string getNome();
	int getReparador() ;
	int getCombatente();
	bool getOperador() ;
	int getExoesqueleto();
	bool getRespira();
	int getLocalizacao();
	//------SET---------
	void setHp(int newHP);
	void setReparador(int reparador);
	void setCombatente(int combatente) ;
	void setOperador(bool operador) ;
	void setExoesqueleto(int exoesqueleto) ;
	void setRespira(bool respira);
	void setLocalizacao(int localizacao);
	void setNome(string nome);
};

#endif