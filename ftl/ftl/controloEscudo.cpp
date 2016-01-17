#include "ControloEscudo.h"

ControloEscudo::ControloEscudo(int id, string nome, int posicao, int x, int y) : Sala(id, nome, posicao, x, y){		//contrutor
	this->nivelEscudo = 100;
	this->nivelEscudoActual = 100;
	
}
ControloEscudo::ControloEscudo(){}
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
int ControloEscudo::getPosicao(){
	return this->posicao;
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
void ControloEscudo::setPosicao(int newPosicao){
	this->posicao = newPosicao;
}