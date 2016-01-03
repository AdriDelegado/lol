#include "jogo.h"



jogo::jogo(){};

jogo::jogo(int Ndificuldade, int Nmusica)
{
	this -> dificuldade =Ndificuldade;
	this -> musica =Nmusica;
}

jogo::~jogo(){};


//--------------GET------------------

int jogo::getDificuldade()
{
	return this->dificuldade;
}
int jogo::getMusica()
{
	return this->musica;
}
int jogo::getMilhasIniciais()
{
	return this->milhasIniciais;
}
int jogo::getMilhasActuais()
{
	return this->milhasActuais;
}

void jogo::calculaMilhas(int Ndificuldade)
{
	milhasIniciais = 4000 + 1000 * Ndificuldade;
}

void jogo::calculaMilhasActual(int NmilhasActuais, int propD, int propE)
{
	milhasActuais = NmilhasActuais + propD + propE;
}

bool jogo::VerificaFimJogo(SpaceShip &nave)
{
	if (getMilhasActuais() == getMilhasIniciais()) //acaba jogo
		return true;
	for (int i = 0; i != nave.getRooms().size(); i++)
	{
		if (nave.getRooms().at(i)->getIntegridade() <= 0)
			return true;
	}

	return false;
}

bool jogo::VerificaNaveAnda(SpaceShip &nave) //verifica se a nave pode andar 
{
	if (nave.getRooms().at(5)->getIntegridade() < 100)
		return false; //nao pode andar

	for (int i = 0; i != nave.getTripulacao().size(); i++)
	{
		if (nave.getTripulacao().at(i)->getId() == 1 ) //capitao
		{
			if (nave.getTripulacao().at(i)->getIdSala() == 8) //se esta na ponte
				return true;//pode andar
		}
		else if (nave.getTripulacao().at(i)->getId() == 2)//camisa vermelha
		{
			if (nave.getTripulacao().at(i)->getIdSala() == 8) //se esta na ponta
				return true;
		}
	}
	return false;
}


//------------SET------------------

void jogo::setDificuldade(int Ndificuldade)
{
	this->dificuldade = Ndificuldade;
}
void jogo::setMusica(int Nmusica)
{
	this->musica = Nmusica;
}
void jogo::setMilhasIniciais(int NmilhasIniciais)
{
	this->milhasIniciais = NmilhasIniciais;
}
void jogo::setMilhasActuais(int NmilhasActuais)
{
	this->milhasActuais = NmilhasActuais;
}