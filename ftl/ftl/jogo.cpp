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

void jogo::calculaMilhasIniciais(int Ndificuldade)
{
	if (Ndificuldade == 0){
		milhasIniciais = 4000 + 1000 * 1;
	}
	else{
		milhasIniciais = 4000 + 1000 * Ndificuldade;
		setMilhasActuais(0);
	}
	
}

void jogo::calculaMilhasActual(int propD, int propE)
{

	this->milhasActuais = this->milhasActuais + propD + propE;
	
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
		
		string s = nave.getTripulacao().at(i)->getId();
		vector<char> v(s.begin(), s.end());



		if (v[0] == 'C' ) //capitao
		{
			if (nave.getTripulacao().at(i)->getIdSala() == 8) //se esta na ponte
				return true;//pode andar
		}
		else if (v[0] == 'V')//camisa vermelha
		{
			if (nave.getTripulacao().at(i)->getIdSala() == 8) //se esta na ponta
				return true;
		}
	}
	return false;
}

void jogo::repararIntegridade(SpaceShip &apolo1){

	for (int x = 0; x != apolo1.getTripulacao().size(); x++){

		string s = apolo1.getTripulacao().at(x)->getId();
		vector<char> v(s.begin(), s.end());
		if (v[0] == 'C'){
			Capitao *c = (Capitao*)apolo1.getTripulacao().at(x);
			if (apolo1.getRooms().at(c->getIdSala() - 1)->getIntegridade() < 100){  // pegar indicidual ID das salas e comparar com os do tripulante 

				int integNovo = apolo1.getRooms().at(c->getIdSala() - 1)->getIntegridade() + c->getReparador();

				apolo1.getRooms().at(c->getIdSala() - 1)->setIntegridade(integNovo);
			}

		}
		else if (v[0] == 'V'){
			CamisaVermelha *v = (CamisaVermelha*)apolo1.getTripulacao().at(x);
			if (apolo1.getRooms().at(v->getIdSala() - 1)->getIntegridade() < 100){
				int integNovo = apolo1.getRooms().at(v->getIdSala() - 1)->getIntegridade() + v->getReparador();

				apolo1.getRooms().at(v->getIdSala() - 1)->setIntegridade(integNovo);
			}
		}

	}

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