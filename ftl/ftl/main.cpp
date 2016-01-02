
#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
//#include "nave.h"
#include "consola.h"
#include "UserInterface.h"
using namespace std;

void menuPrincipal();
void creditos();
int settings();
//void iniciarJogo();

int main(){
	menuPrincipal();
	return 0;
}

void menuPrincipal(){
	Consola c;
	int dificuldade; //valor para agarrar a dificuldade seleccionada, deve ser preciso meter em kel classe
	c.setScreenSize(50, 80);
	c.setTextSize(20, 20);
	c.setTextColor(c.AZUL_CLARO);
	c.setBackgroundColor(c.PRETO);
	c.gotoxy(10, 10);
	cout << "INICIAR";
	c.gotoxy(10, 11);
	cout << "SETTINGS";
	c.gotoxy(10, 12);
	cout << "CREDITS" << endl;

	char tecla;

	int x = 7, y = 10;
	c.gotoxy(x, y);
	cout << '>';
	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER){
			if (y == 10){
				c.clrscr();			//limpa o ecra
				UserInterface s;
				s.novoJogo();
				
			}
			if (y == 11){
				c.clrscr();
				dificuldade = settings();
				menuPrincipal();
			}
			if (y == 12){
				c.clrscr();			//limpa o ecra
				creditos();
			}

		}
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.gotoxy(x, y);
		cout << ' ';

		if (tecla == c.CIMA){
			y--;
			if (y == 9){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.BAIXO){
			y++;
			if (y == 13){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 10;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
	}


}

void creditos(){
	Consola c;
	char tecla;


	c.gotoxy(10, 10);
	cout << "CREDITS";
	c.gotoxy(10, 12);
	cout << "NOME: ADRIEL NICOLAU";
	c.gotoxy(10, 13);
	cout << "NUM_ALUNO: 21200802";

	c.gotoxy(10, 16);
	cout << "NOME: NUNO CURADO";
	c.gotoxy(10, 17);
	cout << "NUM_ALUNO: 21210595";

	c.gotoxy(10, 19);
	cout << "PRIMA ESC PARA VOLTAR";

	while (1){
		tecla = c.getch();
		if (tecla == c.ESCAPE){
			c.clrscr();
			menuPrincipal();

		}
	}

}

int settings()
{
	Consola c;
	char tecla;
	int dificuldade;

	c.gotoxy(10, 10);
	cout << "EASY";
	c.gotoxy(10, 11);
	cout << "NORMAL";
	c.gotoxy(10, 12);
	cout << "HARD" << endl;
	c.gotoxy(10, 19);
	cout << "PRIMA ESC PARA VOLTAR";
	int x = 7, y = 10;
	c.gotoxy(x, y);
	cout << '>';

	while (1){

			tecla = c.getch();
			if (tecla == c.ESCAPE)
			{
				c.clrscr();
				menuPrincipal();

			}
			if (tecla == c.ENTER){
				if (y == 10){
					dificuldade = 1;
					c.clrscr();			//limpa o ecra
					menuPrincipal();

				}
				if (y == 11){
					dificuldade = 2;
					c.clrscr();			//limpa o ecra
					menuPrincipal();
				}
				if (y == 12){
					dificuldade = 3;
					c.clrscr();			//limpa o ecra
					menuPrincipal();
				}

			}
			if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
				(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

			c.gotoxy(x, y);
			cout << ' ';

			if (tecla == c.CIMA){
				y--;
				if (y == 9){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
					y = 12;
					c.gotoxy(x, y);
					cout << '>';
				}
				else{
					c.gotoxy(x, y);
					cout << '>';
				}
			}
			if (tecla == c.BAIXO){
				y++;
				if (y == 13){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
					y = 10;
					c.gotoxy(x, y);
					cout << '>';
				}
				else{
					c.gotoxy(x, y);
					cout << '>';
				}
			}
		}	
}