#include "Robo.h"


Robo::Robo() : Tripulante(8, 0, 3, false, 2, false, 0, "X34-ZT2", 3){

}

Robo::~Robo(){}

//------GET---------
int Robo::getId()
{
	return this->id;
}
int Robo::getIdSala()
{
	return this->idSala;
}

string Robo::getNome(){
	return this->nome;
}
int Robo::getHP(){
	return this->hp;
}

int Robo::getReparador(){
	return this->reparador;
}
int Robo::getCombatente(){
	return this->combatente;
}
bool Robo::getOperador(){
	return this->operador;
}
int Robo::getExoesqueleto(){
	return this->exoesqueleto;
}
bool Robo::getRespira(){
	return this->respira;
}
int Robo::getLocalizacao(){
	return this->localizacao;
}
//------SET---------

void Robo::setId(int id)
{
	this->id = id;
}
void Robo::setIdSala(int NidSala)
{
	this->idSala = NidSala;
}
void Robo::setHp(int newHP){
	this->hp = newHP;
}

void Robo::setReparador(int reparador){
	this->reparador = reparador;
}
void Robo::setCombatente(int combatente){
	this->combatente = combatente;

}
void Robo::setOperador(bool operador){
	this->operador = operador;
}
void Robo::setExoesqueleto(int exoesqueleto){
	this->exoesqueleto = exoesqueleto;
}
void Robo::setRespira(bool repira){
	this->respira = respira;
}
void Robo::setLocalizacao(int localizacao){
	this->localizacao = localizacao;
}
void Robo::setNome(string nome){
	this->nome = nome;
}