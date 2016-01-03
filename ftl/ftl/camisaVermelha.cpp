#include "camisaVermelha.h"


CamisaVermelha::CamisaVermelha(string id) : Tripulante(5, 1, 1, true, 0, true, 0, "Camisa Vermelha", id){}

CamisaVermelha::~CamisaVermelha(){}


		//------GET---------
string CamisaVermelha::getId()
{
	return this->id;
}

int CamisaVermelha::getIdSala()
{
	return this->idSala;
}
string CamisaVermelha::getNome(){
	return this->nome;
}
int CamisaVermelha::getHP(){
	return this->hp;
}

int CamisaVermelha::getReparador(){
	return this->reparador;
}
int CamisaVermelha::getCombatente(){
	return this->combatente;
}
bool CamisaVermelha::getOperador(){
	return this->operador;
}
int CamisaVermelha::getExoesqueleto(){
	return this->exoesqueleto;
}
bool CamisaVermelha::getRespira(){
	return this->respira;
}
int CamisaVermelha::getLocalizacao(){
	return this->localizacao;
}
		//------SET---------
void CamisaVermelha::setId(string id)
{
	this->id = id;
}
void CamisaVermelha::setIdSala(int NidSala)
{
	this->idSala = NidSala;
}
void CamisaVermelha::setHp(int newHP){
	this->hp = newHP;
}

void CamisaVermelha::setReparador(int reparador){
	this->reparador = reparador;
}
void CamisaVermelha::setCombatente(int combatente){
	this->combatente = combatente;

}
void CamisaVermelha::setOperador(bool operador){
	this->operador = operador;
}
void CamisaVermelha::setExoesqueleto(int exoesqueleto){
	this->exoesqueleto = exoesqueleto;
}
void CamisaVermelha::setRespira(bool repira){
	this->respira = respira;
}
void CamisaVermelha::setLocalizacao(int localizacao){
	this->localizacao = localizacao;
}
void CamisaVermelha::setNome(string nome){
	this->nome = nome;
}