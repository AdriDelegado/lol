#include "Propulsor.h"

Propulsor::Propulsor(int id, string nome, int posicao, int x, int y) :Sala(id, nome, posicao, x, y){	//contrutor

	this->nivelPropulsor = 100;
}

Propulsor::Propulsor(){}
Propulsor::~Propulsor(void){}			//destrutor

int Propulsor::getNivelPropulsor(){
	return this->nivelPropulsor;
}

void Propulsor::setNivelPropulsor(int newValorNivelPropulsor){
	this->nivelPropulsor = newValorNivelPropulsor;
}
//------GET---------
int Propulsor::getId(void){
	return id;
}
int Propulsor::getOxigenio(){
	return this->oxigenio;
}
int Propulsor::getIntegridade(){
	return this->integridade;
}
int Propulsor::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool Propulsor::getBrecha(){
	return this->brecha;
}
bool Propulsor::getFogo(){
	return this->fogo;
}
bool Propulsor::getCurtoCircuito(){  // o que � cc ?
	return this->curtoCircuito;
}
int Propulsor::getX() {
	return this->x;
}

int Propulsor::getY() {
	return this->y;
}
string Propulsor::getNome() {
	return this->nome;
}
int Propulsor::getPosicao(){
	return this->posicao;
}
//------SET---------
void Propulsor::setId(int id){
	this->id = id;
}
void Propulsor::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void Propulsor::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void Propulsor::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void Propulsor::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void Propulsor::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void Propulsor::setCurtoCircuito(bool newValorCurtoCircuito){  
	this->curtoCircuito = newValorCurtoCircuito;
}
void Propulsor::setX(int x) {
	this->x = x;
}

void Propulsor::setY(int y) {
	this->y = y;
}
void Propulsor::setNome(string nome){
	this->nome = nome;
}
void Propulsor::setPosicao(int newPosicao){
	this->posicao = newPosicao;
}