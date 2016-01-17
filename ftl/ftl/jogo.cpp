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
	Consola cons;
	int l = 0;
	for (int x = 0; x != apolo1.getTripulacao().size(); x++){

		string s = apolo1.getTripulacao().at(x)->getId();
		vector<char> v(s.begin(), s.end());

		if (v[0] == 'C'){
			Capitao *c = (Capitao*)apolo1.getTripulacao().at(x);

			for (int i = 0; i != apolo1.getRooms().size(); i++){
				if (apolo1.getRooms().at(i)->getPosicao() == c->getIdSala()){
					if (apolo1.getRooms().at(i)->getIntegridade() < 100){
						apolo1.getRooms().at(i)->setIntegridade(apolo1.getRooms().at(i)->getIntegridade() + c->getReparador()); // falta validar se a integridade ultrapassa de 100
						cons.gotoxy(84, 4+l); // posicçao da introduçao dos camandos
						cout << "sala " << apolo1.getRooms().at(i)->getPosicao() << " foi reparada";
						l++;
					}
				}
			}
		}
		else if (v[0] == 'V'){
			CamisaVermelha *v = (CamisaVermelha*)apolo1.getTripulacao().at(x);
			for (int i = 0; i != apolo1.getRooms().size(); i++){
				if (apolo1.getRooms().at(i)->getPosicao() == v->getIdSala()){
					if (apolo1.getRooms().at(i)->getIntegridade() < 100){
						apolo1.getRooms().at(i)->setIntegridade(apolo1.getRooms().at(i)->getIntegridade() + v->getReparador()); // falta validar se a integridade ultrapassa de 100
						cons.gotoxy(84, 4 + l); // posicçao da introduçao dos camandos
						cout << "sala " << apolo1.getRooms().at(i)->getPosicao() << " foi reparada";
						l++;
					}
				}
			}
		}
	}
}

void jogo::eventos(SpaceShip &apolo1){
	eventoCampoPoCosmico(apolo1);
	
}

void jogo::eventoCampoPoCosmico(SpaceShip &apolo1){
	int l = 0;
	int val = apolo1.getRooms().size()-1;

	Consola cons;
	random_device rd2;
	mt19937 mt2(rd2());
	cons.gotoxy(84, 4); // posicçao da introduçao dos camandos
	cout << "Po Cosmico";
	uniform_int_distribution<int> dist2(4, 5);
	int y = dist2(mt2);
	for (int i = 0; i < y; i++){

		uniform_int_distribution<int> dist3(0, val);
		int c = dist3(mt2);
		for (int x = 0; x != apolo1.getRooms().size(); x++){

			if (apolo1.getRooms().at(x)->getPosicao() == c){

				if (apolo1.getRooms().at(x)->getPosicao() == 0){
					Propulsor *p = (Propulsor*)apolo1.getRooms().at(c);
					p->setNivelPropulsor(p->getNivelPropulsor() - 10);
					p->setIntegridade(p->getIntegridade() - 10);
					apolo1.getRooms().erase(apolo1.getRooms().begin() + x);
					apolo1.setRooms(*p);

					cons.gotoxy(84, 10 + l); // posicçao da introduçao dos camandos
					cout<<"sala " << c + 1 << " danificada";
					l++;
				}
				else if (apolo1.getRooms().at(i)->getPosicao() == 9){
					Propulsor *p = (Propulsor*)apolo1.getRooms().at(c);
					p->setNivelPropulsor(p->getNivelPropulsor() - 10);
					p->setIntegridade(p->getIntegridade() - 10);
					apolo1.getRooms().erase(apolo1.getRooms().begin() + x);
					apolo1.setRooms(*p);
					cons.gotoxy(84, 10 + l); // posicçao da introduçao dos camandos

					cout << "sala " << c + 1 << " danificada";
					l++;
				}
				else{
					apolo1.getRooms().at(x)->setIntegridade(apolo1.getRooms().at(x)->getIntegridade() - 10);
					cons.gotoxy(84, 10 + l); // posicçao da introduçao dos camandos

					cout << "sala " << c + 1 << " danificada";
					l++;
				}
			}

		}
	}
}
//------------SET------------------

void jogo::setDificuldade(int Ndificuldade){
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