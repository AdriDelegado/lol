#pragma once
#ifndef	ControloEscudo_H
#define ControloEscudo_H
#include <iostream>
#include <string>
#include <vector>

#include "Sala.h"
using namespace std;

class ControloEscudo : public Sala{
	int nivelEscudo;
	int nivelEscudoActual;
	
public:
	ControloEscudo(string nome, int nEscudo, int nEscudoActual, int id);		//contrutor
	ControloEscudo(void);									//construtor por defeito
	~ControloEscudo(void);								//destrutor

	//------GET---------
	virtual	int getNivelEscudo();
	virtual int getNivelEscudoActual();
	
	//------SET---------
	virtual void setNivelEscudo(int newNivelEscudo);
	virtual void setNivelEscudoActual(int newNivelEscudoActual);
	


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