#pragma once
#ifndef Propulsor_H
#define Propulsor_H
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Propulsor : public Sala
{
	int nivelPropulsor;
public:
	Propulsor(string nome, int nPropulsor, int id);	//contrutor
	Propulsor();				//contrutor por defeito
	~Propulsor(void);			//destrutor

	//------GET---------
	virtual int getNivelPropulsor();


	//------SET---------
	virtual void setNivelPropulsor(int newValorNivelPropulsor);


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