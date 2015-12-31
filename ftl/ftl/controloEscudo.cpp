#include "ControloEscudo.h"

ControloEscudo::ControloEscudo(string nome,int nEscudo, int nEscudoActual, int id) : Sala(id, nome){		//contrutor
	this->nivelEscudo = nEscudo;
	this->nivelEscudoActual = nEscudoActual;
	
}

ControloEscudo::ControloEscudo(void){}									//construtor por defeito
ControloEscudo::~ControloEscudo(void){}								//destrutor

//-------------GET-------------------------
int ControloEscudo::getNivelEscudo(){
	return this->nivelEscudo;
}
int ControloEscudo::getNivelEscudoActual(){
	return this->nivelEscudoActual;
}



//------------SET---------------------
void ControloEscudo::setNivelEscudo(int newNivelEscudo){
	this->nivelEscudo = newNivelEscudo;
}
void ControloEscudo::setNivelEscudoActual(int newNivelEscudoActual){
	this->nivelEscudoActual = newNivelEscudoActual;
}


//------GET---------
int ControloEscudo::getId(void){
	return id;
}
int ControloEscudo::getOxigenio(){
	return this->oxigenio;
}
int ControloEscudo::getIntegridade(){
	return this->integridade;
}
int ControloEscudo::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool ControloEscudo::getBrecha(){
	return this->brecha;
}
bool ControloEscudo::getFogo(){
	return this->fogo;
}
bool ControloEscudo::getCurtoCircuito(){  // o que é cc ?
	return this->curtoCircuito;
}
int ControloEscudo::getX() {
	return this->x;
}

int ControloEscudo::getY() {
	return this->y;
}
string ControloEscudo::getNome() {
	return this->nome;
}
//------SET---------
void ControloEscudo::setId(int id){
	this->id = id;
}
void ControloEscudo::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void ControloEscudo::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void ControloEscudo::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void ControloEscudo::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void ControloEscudo::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void ControloEscudo::setCurtoCircuito(bool newValorCurtoCircuito){  // o que é cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void ControloEscudo::setX(int x) {
	this->x = x;
}

void ControloEscudo::setY(int y) {
	this->y = y;
}
void ControloEscudo::setNome(string nome){
	this->nome = nome;
}