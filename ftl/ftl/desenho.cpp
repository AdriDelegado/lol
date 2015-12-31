#include "Desenho.h"


Desenho::Desenho()
{

}

Desenho::Desenho(int x, int y)
{
	this->x = x;
	this->y = y;
}

Desenho::~Desenho(void)
{

}

void Desenho::DesenhoPortas()
{
	Consola c;

	//portas horizontais
	c.gotoxy(19, 5);
	cout << (char)205;
	c.gotoxy(34, 5);
	cout << (char)205;
	c.gotoxy(49, 5);
	cout << (char)205;
	c.gotoxy(19, 17);
	cout << (char)205;
	c.gotoxy(34, 17);
	cout << (char)205;
	c.gotoxy(49, 17);
	cout << (char)205;
	c.gotoxy(34, 11);
	cout << (char)205;
	c.gotoxy(49, 11);
	cout << (char)205;
	c.gotoxy(64, 11);
	cout << (char)205;

	//portas verticais
	c.gotoxy(27, 8);
	cout << (char)186;
	c.gotoxy(42, 8);
	cout << (char)186;
	c.gotoxy(57, 8);
	cout << (char)186;
	c.gotoxy(27, 14);
	cout << (char)186;
	c.gotoxy(42, 14);
	cout << (char)186;
	c.gotoxy(57, 14);
	cout << (char)186;
}

void Desenho::DesenhoLimitesComandos()
{
	Consola c;
	c.gotoxy(29, 22);
	cout << "LINHA DE ComandoS";
	//inicio da borda dos Comandos

	c.gotoxy(4, 23);
	cout << (char)218;
	c.gotoxy(5, 23);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 23);
		cout << (char)196;
	}
	c.gotoxy(80, 23);
	cout << (char)191;
	for (int i = 24; i < 26; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}
	c.gotoxy(4, 26);
	cout << (char)192;
	c.gotoxy(5, 26);
	for (int i = 5; i < 80; i++)
	{
		c.gotoxy(i, 26);
		cout << (char)196;
	}
	c.gotoxy(80, 26);
	cout << (char)217;
	for (int i = 24; i < 26; i++)
	{
		c.gotoxy(80, i);
		cout << (char)179;
	}
	//fim da borda de Comandos

}

void Desenho::DesenhoLimitesInfo()
{
	Consola c;
	c.gotoxy(94, 1);
	cout << "INFORMACAO";

	//inicio da borda de status
	c.gotoxy(83, 2); //desenha esquina superior esquerda
	cout << (char)218;
	c.gotoxy(84, 2);
	for (int i = 84; i < 114; i++)//desenha linha horizontal top
	{
		c.gotoxy(i, 2);
		cout << (char)196;
	}
	c.gotoxy(114, 2); //desenha esquina superior direita
	cout << (char)191;
	for (int i = 3; i < 20; i++) //desenha linha vertical direita
	{
		c.gotoxy(114, i);
		cout << (char)179;
	}
	c.gotoxy(83, 20);
	cout << (char)192; //desenha esquina esquerda inferior
	c.gotoxy(84, 20);
	for (int i = 84; i < 114; i++) //desenha linha horizontal inferior
	{
		c.gotoxy(i, 20);
		cout << (char)196;
	}
	c.gotoxy(114, 20);
	cout << (char)217; //desenha esquina direita inferior
	for (int i = 3; i < 20; i++) //desenha linha vertical esquerda
	{
		c.gotoxy(83, i);
		cout << (char)179;
	}

	//fim da borda do status
}

void Desenho::DesenhoLimitesNave()
{
	Consola c;

	c.gotoxy(30, 1);
	cout << "NAVE ESPACIAL";

	//inicio da borda da nave
	c.gotoxy(4, 2);
	cout << (char)218;

	c.gotoxy(5, 2);
	for (int i = 5; i < 64; i++)
	{
		c.gotoxy(i, 2);
		cout << (char)196;
	}

	c.gotoxy(64, 2);
	cout << (char)191;
	for (int i = 3; i < 9; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}

	c.gotoxy(4, 8);
	cout << (char)192;

	c.gotoxy(5, 8);
	for (int i = 5; i < 19; i++)
	{
		c.gotoxy(i, 8);
		cout << (char)196;
	}
	c.gotoxy(5, 14);
	for (int i = 5; i < 19; i++)
	{
		c.gotoxy(i, 14);
		cout << (char)196;
	}

	c.gotoxy(18, 8);
	cout << (char)191;
	c.gotoxy(18, 14);
	cout << (char)217;

	c.gotoxy(18, 9);
	for (int i = 9; i < 14; i++)
	{
		c.gotoxy(18, i);
		cout << (char)179;
	}

	c.gotoxy(4, 14);
	for (int i = 14; i < 20; i++)
	{
		c.gotoxy(4, i);
		cout << (char)179;
	}
	c.gotoxy(4, 14);
	cout << (char)218;

	c.gotoxy(4, 20);
	cout << (char)192;
	c.gotoxy(5, 20);
	for (int i = 5; i < 64; i++)
	{
		c.gotoxy(i, 20);
		cout << (char)196;
	}
	c.gotoxy(64, 20);
	cout << (char)217;
	for (int i = 3; i < 8; i++)
	{
		c.gotoxy(64, i);
		cout << (char)179;
	}

	c.gotoxy(64, 15);
	for (int i = 15; i < 20; i++)
	{
		c.gotoxy(64, i);
		cout << (char)179;
	}

	c.gotoxy(64, 14);
	cout << (char)218;

	c.gotoxy(65, 14);
	for (int i = 65; i < 79; i++)
	{
		c.gotoxy(i, 14);
		cout << (char)196;
	}

	c.gotoxy(79, 14);
	cout << (char)217;

	c.gotoxy(79, 8);
	for (int i = 8; i < 14; i++)
	{
		c.gotoxy(79, i);
		cout << (char)179;
	}

	c.gotoxy(79, 8);
	cout << (char)191;

	c.gotoxy(65, 8);
	for (int i = 65; i < 79; i++)
	{
		c.gotoxy(i, 8);
		cout << (char)196;
	}

	c.gotoxy(64, 8);
	cout << (char)192;

	//fim das bordas do mapa pra nave
}

void Desenho::DesenhoSala()
{
	Consola c;

	//Salas da primeira linha
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(5, 3);
	cout << (char)80;
	c.gotoxy(6, 3);
	cout << (char)82;
	c.gotoxy(7, 3);
	cout << (char)79;
	c.gotoxy(8, 3);
	cout << (char)80;
	c.gotoxy(9, 3);
	cout << (char)95;
	c.gotoxy(10, 3);
	cout << (char)69;
	c.setTextColor(c.BRANCO);
	for (int i = 11; i < 19; i++) // Sala 1
	{
		c.gotoxy(i, 3);
		cout << (char)219;
	}
	
	for (int i = 5; i < 19; i++) // Sala 1
	{
		c.gotoxy(i, 4);
		cout << (char)219;

		for (int j = 4; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	// Sala 2
	c.gotoxy(20, 3);
	for (int i = 20; i < 34; i++) 
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	// Sala 3
	c.gotoxy(35, 3);
	for (int i = 35; i < 49; i++) 
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	// Sala 4
	c.gotoxy(50, 3);
	for (int i = 50; i < 64; i++) 
	{
		c.gotoxy(i, 3);
		cout << (char)219;
		for (int j = 3; j < 8; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	//Salas da segunda linha
	
	// Sala 5 
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(20, 9);
	cout << (char)77;
	c.gotoxy(21, 9);
	cout << (char)65;
	c.gotoxy(22, 9);
	cout << (char)81;
	c.gotoxy(23, 9);
	cout << (char)85;
	c.gotoxy(24, 9);
	cout << (char)73;
	c.gotoxy(25, 9);
	cout << (char)78;
	c.gotoxy(26, 9);
	cout << (char)65;
	c.gotoxy(27, 9);
	cout << (char)83;
	c.setTextColor(c.BRANCO);

	for (int i = 28; i < 34; i++) 
	{
		c.gotoxy(i, 9);
		cout << (char)219;
	}

	for (int i = 20; i < 34; i++) 
	{
		c.gotoxy(i, 10);
		cout << (char)219;
		for (int j = 10; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	// Sala 6
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(35, 9);
	cout << (char)83;
	c.gotoxy(36, 9);
	cout << (char)85;
	c.gotoxy(37, 9);
	cout << (char)80;
	c.gotoxy(38, 9);
	cout << (char)80;
	c.gotoxy(39, 9);
	cout << (char)95;
	c.gotoxy(40, 9);
	cout << (char)86;
	c.gotoxy(41, 9);
	cout << (char)73;
	c.gotoxy(42, 9);
	cout << (char)68;
	c.gotoxy(43, 9);
	cout << (char)65;
	c.setTextColor(c.BRANCO);

	for (int i = 44; i < 49; i++) 
	{
		c.gotoxy(i, 9);
		cout << (char)219;
	}
	for (int i = 35; i < 49; i++) // Sala 6
	{
		c.gotoxy(i, 10);
		cout << (char)219;
		for (int j = 10; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	// Sala 7
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(50, 9);
	cout << (char)67;
	c.gotoxy(51, 9);
	cout << (char)79;
	c.gotoxy(52, 9);
	cout << (char)78;
	c.gotoxy(53, 9);
	cout << (char)84;
	c.gotoxy(54, 9);
	cout << (char)82;
	c.gotoxy(55, 9);
	cout << (char)79;
	c.gotoxy(56, 9);
	cout << (char)76;
	c.gotoxy(57, 9);
	cout << (char)95;
	c.gotoxy(58, 9);
	cout << (char)69;
	c.gotoxy(59, 9);
	cout << (char)83;
	c.gotoxy(60, 9);
	cout << (char)67;
	c.gotoxy(61, 9);
	cout << (char)85;
	c.gotoxy(62, 9);
	cout << (char)68;
	c.gotoxy(63, 9);
	cout << (char)79;
	c.setTextColor(c.BRANCO);
	

	for (int i = 50; i < 64; i++) 
	{
		c.gotoxy(i, 10);
		cout << (char)219;
		for (int j = 10; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	// Sala 8
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(65, 9);
	cout << (char)80;
	c.gotoxy(66, 9);
	cout << (char)79;
	c.gotoxy(67, 9);
	cout << (char)78;
	c.gotoxy(68, 9);
	cout << (char)84;
	c.gotoxy(69, 9);
	cout << (char)69;
	c.setTextColor(c.BRANCO);
	for (int i = 70; i < 79; i++)
	{
		c.gotoxy(i, 9);
		cout << (char)219;
	}
	for (int i = 65; i < 79; i++) 
	{
		c.gotoxy(i, 10);
		cout << (char)219;
		for (int j = 10; j < 14; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}


	//Salas da terceira linha
	// Sala 9
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	c.gotoxy(5, 15);
	cout << (char)80;
	c.gotoxy(6, 15);
	cout << (char)82;
	c.gotoxy(7, 15);
	cout << (char)79;
	c.gotoxy(8, 15);
	cout << (char)80;
	c.gotoxy(9, 15);
	cout << (char)95;
	c.gotoxy(10, 15);
	cout << (char)68;
	c.setTextColor(c.BRANCO);
	
	for (int i = 11; i < 19; i++) 
	{
		c.gotoxy(i, 15);
		cout << (char)219;
	}

	c.gotoxy(5, 15);
	for (int i = 5; i < 19; i++) // Sala 9
	{
		c.gotoxy(i, 16);
		cout << (char)219;
		for (int j = 16; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(20, 15);
	for (int i = 20; i < 34; i++) // Sala 10
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}

	c.gotoxy(35, 15);
	for (int i = 35; i < 49; i++) // Sala 11
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
	c.gotoxy(50, 15);
	for (int i = 50; i < 64; i++) // Sala 12
	{
		c.gotoxy(i, 15);
		cout << (char)219;
		for (int j = 15; j < 20; j++)
		{
			c.gotoxy(i, j);
			cout << (char)219;
		}
	}
}

void Desenho::escreveNomeSala(string nome, int posicao){
	Consola c;
	if (nome == "beliche"){
		// Sala 2
		if (posicao == 2){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(20, 3);
			cout << (char)66;
			c.gotoxy(21, 3);
			cout << (char)69;
			c.gotoxy(22, 3);
			cout << (char)76;
			c.gotoxy(23, 3);
			cout << (char)73;
			c.gotoxy(24, 3);
			cout << (char)67;
			c.gotoxy(25, 3);
			cout << (char)72;
			c.gotoxy(26, 3);
			cout << (char)69;
			
		}
		else if (posicao == 3){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(35, 3);
			cout << (char)66;
			c.gotoxy(36, 3);
			cout << (char)69;
			c.gotoxy(37, 3);
			cout << (char)76;
			c.gotoxy(38, 3);
			cout << (char)73;
			c.gotoxy(39, 3);
			cout << (char)67;
			c.gotoxy(40, 3);
			cout << (char)72;
			c.gotoxy(41, 3);
			cout << (char)69;
			
		}
		else if (posicao == 4){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(50, 3);
			cout << (char)66;
			c.gotoxy(51, 3);
			cout << (char)69;
			c.gotoxy(52, 3);
			cout << (char)76;
			c.gotoxy(53, 3);
			cout << (char)73;
			c.gotoxy(54, 3);
			cout << (char)67;
			c.gotoxy(55, 3);
			cout << (char)72;
			c.gotoxy(56, 3);
			cout << (char)69;
			
		}
		else if (posicao == 10){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(20, 15);
			cout << (char)66;
			c.gotoxy(21, 15);
			cout << (char)69;
			c.gotoxy(22, 15);
			cout << (char)76;
			c.gotoxy(23, 15);
			cout << (char)73;
			c.gotoxy(24, 15);
			cout << (char)67;
			c.gotoxy(25, 15);
			cout << (char)72;
			c.gotoxy(26, 15);
			cout << (char)69;
			
		}
		else if (posicao == 11){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(35, 15);
			cout << (char)66;
			c.gotoxy(36, 15);
			cout << (char)69;
			c.gotoxy(37, 15);
			cout << (char)76;
			c.gotoxy(38, 15);
			cout << (char)73;
			c.gotoxy(39, 15);
			cout << (char)67;
			c.gotoxy(40, 15);
			cout << (char)72;
			c.gotoxy(41, 15);
			cout << (char)69;
			
		}
		else if (posicao == 12){
			c.setTextColor(c.AZUL);
			c.setBackgroundColor(c.BRANCO);
			c.gotoxy(50, 15);
			cout << (char)66;
			c.gotoxy(51, 15);
			cout << (char)69;
			c.gotoxy(52, 15);
			cout << (char)76;
			c.gotoxy(53, 15);
			cout << (char)73;
			c.gotoxy(54, 15);
			cout << (char)67;
			c.gotoxy(55, 15);
			cout << (char)72;
			c.gotoxy(56, 15);
			cout << (char)69;
			
		}
		
	}
	
		
		
}

void Desenho::desenhaTripulante(string nome, int posicao){
	Consola c;
	c.setTextColor(c.AZUL);
	c.setBackgroundColor(c.BRANCO);
	if (nome == "Capitao"){
		switch (posicao)
		{
		case 1:
			c.gotoxy(13, 5);
			cout << (char)190;
			break;
		case 2:
			c.gotoxy(28, 5);
			cout << (char)190;
			break;
		case 3:
			c.gotoxy(43, 5);
			cout << (char)190;
			break;
		case 4:
			c.gotoxy(58, 5);
			cout << (char)190;
			break;
		case 5:
			c.gotoxy(28, 11);
			cout << (char)190;
			break;
		case 6:
			c.gotoxy(43, 11);
			cout << (char)190;
			break;
		case 7:
			c.gotoxy(58, 11);
			cout << (char)190;
			break;
		case 8:
			c.gotoxy(73, 11);
			cout << (char)190;
			break;
		case 9:
			c.gotoxy(13, 17);
			cout << (char)190;
			break;
		case 10:
			c.gotoxy(28, 17);
			cout << (char)190;
			break;
		case 11:
			c.gotoxy(43, 17);
			cout << (char)190;
			break;
		case 12:
			c.gotoxy(58, 17);
			cout << (char)190;
			break;
		default:
			break;// escreve na zona de info que a sala nao existe e manda de novo tentar por numa 
		}

		

	}
}