#include "tripulante.h"



Tripulante::Tripulante(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, int localizacao, string nome, int id) :Unidade(hp, nome, id){

	this->reparador = reparador;
	this->combatente = combatente;
	this->operador = operador;
	this->exoesqueleto = exoesqueleto;
	this->respira = respira;
	this->localizacao = localizacao;
	

}
Tripulante::Tripulante(){}
Tripulante::~Tripulante(){}

int Tripulante::getId()
{
	return this->id;
}
int Tripulante::getIdSala()
{
	return this->idSala;
}
int Tripulante::getHP(){
	return this->hp;
}
string Tripulante::getNome(){
	return this->nome;
}

void Tripulante::setId(int id)
{
	this->id = id;
}
void Tripulante::setNome(string nome){
	this->nome = nome;
}
void Tripulante::setHP(int hp){
	this->hp = hp;
}

void Tripulante::setIdSala(int NidSala)
{
	this->idSala = NidSala;
}
