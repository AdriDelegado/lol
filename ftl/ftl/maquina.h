#pragma once
#ifndef	Maquina_H
#define Maquina_H
#include <iostream>
#include <string>
#include <vector>

#include "Sala.h"
using namespace std;

class Maquina : public Sala{
	
public:
	Maquina(string nome,int id);					//contrutor
	Maquina();							//contrutor por defeito
	~Maquina(void);					//destrutor

	//------GET---------
	int getId();
	int getOxigenio();
	int getIntegridade();
	bool getBrecha();
	bool getFogo();
	bool getCurtoCircuito();
	int getNumeroOcupantes();
	int getX();
	int getY();
	string getNome();
	//------SET---------
	void setId(int id);
	void setOxigenio(int newOxigenio);
	void setIntegridade(int newIntegridade);
	void setBrecha(bool newValorBrecha);
	void setFogo(bool newValorFogo);
	void setCurtoCircuito(bool newValorCC);
	void setNumeroOcupantes(int newValorOcupantes);
	void setX(int x);
	void setY(int y);
	void setNome(string nome);
};


#endif