#include "capitao.h"


Capitao::Capitao() : Tripulante(6, 1, 2, true, 1, true, 0, "Capitao", 1){

}

Capitao::~Capitao(){}

//------GET---------
int Capitao::getId()
{
	return this->id;
}
int Capitao::getIdSala()
{
	return this->idSala;
}
string Capitao::getNome(){
	return this->nome;
}
int Capitao::getHP(){
	return this->hp;
}
int Capitao::getReparador(){
	return this->reparador;
}
int Capitao::getCombatente(){
	return this->combatente;
}
bool Capitao::getOperador(){
	return this->operador;
}
int Capitao::getExoesqueleto(){
	return this->exoesqueleto;
}
bool Capitao::getRespira(){
	return this->respira;
}
int Capitao::getLocalizacao(){
	return this->localizacao;
}


//------SET---------
void Capitao::setIdSala(int NidSala)
{
	this->idSala = NidSala;
}
void Capitao::setHp(int newHP){
	this->hp = newHP;
}

void Capitao::setReparador(int reparador){
	this->reparador = reparador;
}
void Capitao::setCombatente(int combatente){
	this->combatente = combatente;

}
void Capitao::setOperador(bool operador){
	this->operador = operador;
}
void Capitao::setExoesqueleto(int exoesqueleto){
	this->exoesqueleto = exoesqueleto;
}
void Capitao::setRespira(bool repira){
	this->respira = respira;
}
void Capitao::setLocalizacao(int localizacao){
	this->localizacao = localizacao;
}
void Capitao::setNome(string nome){
	this->nome = nome;
}
void Capitao::setId(int id){
	this->id = id;
}