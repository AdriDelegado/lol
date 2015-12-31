#include"Ponte.h"

Ponte::Ponte(string nome, int id) :Sala(id, nome){}			//contrutor
Ponte::Ponte(){}				//contrutor por defeito
Ponte::~Ponte(void){}			//destrutor

//------GET---------
int Ponte::getId(void){
	return id;
}
int Ponte::getOxigenio(){
	return this->oxigenio;
}
int Ponte::getIntegridade(){
	return this->integridade;
}
int Ponte::getNumeroOcupantes(){
	return this->numeroOcupantes;
}
bool Ponte::getBrecha(){
	return this->brecha;
}
bool Ponte::getFogo(){
	return this->fogo;
}
bool Ponte::getCurtoCircuito(){  // o que é cc ?
	return this->curtoCircuito;
}
int Ponte::getX() {
	return this->x;
}

int Ponte::getY() {
	return this->y;
}
string Ponte::getNome() {
	return this->nome;
}
//------SET---------
void Ponte::setId(int id){
	this->id = id;
}
void Ponte::setOxigenio(int newValorOxigenio){
	this->oxigenio = newValorOxigenio;
}
void Ponte::setIntegridade(int newValorIntegridade){
	this->integridade = newValorIntegridade;
}
void Ponte::setNumeroOcupantes(int newValorOcupantes){
	this->numeroOcupantes = newValorOcupantes;
}
void Ponte::setBrecha(bool newValorBrecha){
	this->brecha = newValorBrecha;
}
void Ponte::setFogo(bool newValorFogo){
	this->fogo = newValorFogo;
}
void Ponte::setCurtoCircuito(bool newValorCurtoCircuito){  // o que é cc ?
	this->curtoCircuito = newValorCurtoCircuito;
}
void Ponte::setX(int x) {
	this->x = x;
}

void Ponte::setY(int y) {
	this->y = y;
}
void Ponte::setNome(string nome){
	this->nome = nome;
}