#pragma once
#ifndef JOGO_H
#define JOGO_H
#include "spaceShip.h"
#include "capitao.h"
#include "camisaVermelha.h"
#include "robo.h"
#include "consola.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "propulsor.h"
#include <algorithm>
#include<iterator>

class jogo
{
	int dificuldade;
	int musica;
	int milhasIniciais;
	int milhasActuais;

public:
	jogo();
	jogo(int Ndificuldade, int Nmusica);
	~jogo();

	//-------GET----------------------
	int getDificuldade();
	int getMusica();
	int getMilhasIniciais();
	int getMilhasActuais();
	void calculaMilhasIniciais(int Ndificuldade);
	void calculaMilhasActual(int propD, int propE);
	bool VerificaFimJogo(SpaceShip &nave); //se for true o jogo acaba
	bool VerificaNaveAnda(SpaceShip &nave); //se for false nave nao anda
	//-------SET---------------------

	void setDificuldade(int Ndificuldade);
	void setMusica(int Nmusica );
	void setMilhasIniciais(int NmilhasIniciais);
	void setMilhasActuais(int nMilhasActuais);
	
	void repararIntegridade(SpaceShip &apolo1);
	void eventoCampoPoCosmico(SpaceShip &apolo1);
	void eventos(SpaceShip &apolo1);
};

#endif