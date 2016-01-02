#pragma once
#ifndef JOGO_H
#define JOGO_H

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
	void calculaMilhas(int Ndificuldade);
	void calculaMilhasActual(int NmilhasActuais, int propD, int propE);
	bool VerificaFimJogo(SpaceShip &nave); //se for true o jogo acaba
	bool VerificaNaveAnda(SpaceShip &nave); //se for false nave nao anda
	//-------SET---------------------

	void setDificuldade(int Ndificuldade);
	void setMusica(int Nmusica );
	void setMilhasIniciais(int NmilhasIniciais);
	void setMilhasActuais(int nMilhasActuais);
};

#endif