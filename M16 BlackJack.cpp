// M16 BlackJack.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>

using namespace std;

//Player Atributes
string playerName;

//Crupier attributes
string crupierName = "croupier";

bool Picas[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
bool Corazones[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
bool Treboles[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
bool Diamantes[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
int paloAleatorio = 0;
int cartaAleatoria;
int valorAs;
int playerCards;
int playerCardsCrupier;
int puntos;
int puntosTotales;
int puntosTotalesCrupier;
int option;

// COMPRUEBO SI LA CARTA ESTÄ YA SELECCIONADA CON CARTAALEATORIA
// SI Picas[randomIndex] == 0 SIGNIFICA QUE YA HA SALIDO
// SI ES 1, PODEMOS USARLA Y LA TENEMOS QUE SETEAR A 0. AQUÍ, PONDRÍAMOS TAMBIÉN LA CONDICIóN DEL WHILE A TRUE PARA QUE SALGA

void pedirCarta() {
	srand(time(NULL));
	while (playerCards < 2) {

		paloAleatorio = rand() % 4;
		//picas
		if (paloAleatorio == 0)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Picas[randomIndex];
			
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Picas";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
					cout << "Te ha salido una J de Picas\n";
					puntos = 10;
			}
			else if (randomIndex == 11) {
					cout << "Te ha salido una Reina de Picas\n";
					puntos = 10;
			}
			else if (randomIndex == 12) {
					cout << "Te ha salido un Rey de Picas\n";
					puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Picas\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;
			
		}
		
		//corazones
		else if (paloAleatorio == 1)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Corazones[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Corazones";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;
				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;
				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Corazones\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Corazones\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;

		}
		//Treboles
		else if (paloAleatorio == 2)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Treboles[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Treboles \n";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Treboles\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Treboles\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;
		}
		//Diamantes
		else if (paloAleatorio == 3)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Diamantes[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Diamantes";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
					cout << "Te ha salido una J de Diamantes\n";
					puntos = 10;
			}
			else if (randomIndex == 11) {
					cout << "Te ha salido una Reina de Diamantes\n";
					puntos = 10;
			}
			else if (randomIndex == 12) {
					cout << "Te ha salido un Rey de Diamantes\n";
					puntos = 10;
			}
			else {
					cout << "Te han repartido un " << randomIndex + 1 << " de Diamantes\n";
					puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;
		}
		Sleep(1000);
		playerCards++;
	}
	cout << "En total tienes " << puntosTotales << " puntos\n";
} 
void pedirCartaCrupier() {
	srand(time(NULL));
	while (playerCardsCrupier < 1) {

		paloAleatorio = rand() % 4;
		//picas
		if (paloAleatorio == 0)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Picas[randomIndex];

			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Picas\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Picas\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;

		}

		//corazones
		else if (paloAleatorio == 1)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Corazones[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Corazones\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Corazones\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;

		}
		//Treboles
		else if (paloAleatorio == 2)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Treboles[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Treboles\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Treboles\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;
		}
		//Diamantes
		else if (paloAleatorio == 3)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Diamantes[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Diamantes\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Diamantes\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;
		}

		playerCardsCrupier++;
	}
	Sleep(1000);
	cout << "En total tiene " << puntosTotalesCrupier << "puntos\n";
}
void pedirCarta2() {
	srand(time(NULL));
	int cont = playerCards + 1;
	int option;
	while (playerCards < cont) {

		paloAleatorio = rand() % 4;
		//picas
		if (paloAleatorio == 0)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Picas[randomIndex];

			if (randomIndex == 0) {
				cout << "Te ha salido el as de Picas\n";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Picas\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Picas\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;

		}

		//corazones
		else if (paloAleatorio == 1)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Corazones[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Corazones\n";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;
				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;
				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Corazones\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Corazones\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;

		}
		//Treboles
		else if (paloAleatorio == 2)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Treboles[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Treboles\n";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Treboles\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Treboles\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;
		}
		//Diamantes
		else if (paloAleatorio == 3)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Diamantes[randomIndex];
			if (randomIndex == 0) {
				cout << "Te ha salido el as de Diamantes\n";
				Sleep(500);
				cout << "Escoge que valor va a tener el as: 1 [1] o 11 [2]\n";
				cin >> valorAs;
				if (valorAs == 1) {
					cout << "El as vale 1 punto\n";
					puntos = 1;

				}
				else {
					cout << "El as vale 11 puntos\n";
					puntos = 11;

				}
			}
			if (randomIndex == 10) {
				cout << "Te ha salido una J de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Te ha salido una Reina de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Te ha salido un Rey de Diamantes\n";
				puntos = 10;
			}
			else {
				cout << "Te han repartido un " << randomIndex + 1 << " de Diamantes\n";
				puntos = randomIndex + 1;
			}
			puntosTotales = puntosTotales + puntos;
		}

		playerCards++;
		cout << "Te han repartido una carta y en total tienes " << puntosTotales << " puntos\n";
		Sleep(500);
		cout << "Quieres seguir jugando? Si [1] No [2] \n";
		cin >> option;

		if (option == 1) {
			cont++;
		}
		else {
			cont = cont;
		}
	}
}
void pedirCartaCrupier2() {
	srand(time(NULL));
	int cont = playerCardsCrupier + 1;
	while (playerCardsCrupier < cont) {

		paloAleatorio = rand() % 4;
		//picas
		if (paloAleatorio == 0)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Picas[randomIndex];

			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Picas\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Picas\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Picas\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;

		}

		//corazones
		else if (paloAleatorio == 1)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Corazones[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;

				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Corazones\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Corazones\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Corazones\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;

		}
		//Treboles
		else if (paloAleatorio == 2)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Treboles[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;

				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;
				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Treboles\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Treboles\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Treboles\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;
		}
		//Diamantes
		else if (paloAleatorio == 3)
		{
			int randomIndex = rand() % 13;
			cartaAleatoria = Diamantes[randomIndex];
			if (randomIndex == 0) {
				if ((puntosTotalesCrupier + 11) < 21) {
					cout << "El as vale 11 punto\n";
					puntos = 11;
				}
				else {
					cout << "El as vale 1 puntos\n";
					puntos = 1;
				}
			}
			if (randomIndex == 10) {
				cout << "Al Crupier le ha salido una J de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 11) {
				cout << "Al Crupier le ha salido una Reina de Diamantes\n";
				puntos = 10;
			}
			else if (randomIndex == 12) {
				cout << "Al Crupier le ha salido un Rey de Diamantes\n";
				puntos = 10;
			}
			else {
				cout << "Al Crupier le ha salido un " << randomIndex + 1 << " de Diamantes\n";
				puntos = randomIndex + 1;
			}
			puntosTotalesCrupier = puntosTotalesCrupier + puntos;
		}
		Sleep(500);
		cout << "Le han repartido una carta al crupier y tiene " << puntosTotalesCrupier << " puntos\n";
		Sleep(500);
		playerCardsCrupier++;
		if (puntosTotalesCrupier < 17) {
			cont++;
			cout << "El crupier va a pedir otra carta \n";
		}
		else {
			cont = cont;
		}
	}
	
}

int main () {

	cout << "Bienvenido al Casino Monlau! \n";
	Sleep(500);
	cout << "Introduce tu nombre \n";
	cin >> playerName;
	cout << "De acuerdo " << playerName << ", vamos a jugar al BlackJack \n";
	Sleep(500);
	cout << "Tu objetivo va a ser derrotar a la banca.";
	Sleep(500);
	cout << "Para lograrlo debes obtener una mano que puntue mas que la banca, pero que no supere los 21 en su total. \nBuena suerte!\n";
	Sleep(1000);
	cout << "El crupier va a repartir las cartas, 2 para " << playerName << " y una para el:\n";
	Sleep(1000);
	pedirCarta();
	Sleep(1000);
	pedirCartaCrupier();
	Sleep(1000);
	cout << "Quieres seguir jugando? Si [1] No [2] \n";
	cin >> option;
	Sleep(1000);
	if (option == 1)
	{
		pedirCarta2();
		pedirCartaCrupier2();

	}
	else {
	
		pedirCartaCrupier2();

	}
	cout << "Se ha terminado la partida, vamos a ver quien ha ganado\n";
	Sleep(1000);
	cout << "El crupier ha obtenido " << puntosTotalesCrupier << " puntos\n";
	Sleep(1000);
	cout << playerName << " ha obtenido " << puntosTotales << " puntos\n";
		if (puntosTotalesCrupier > puntosTotales && puntosTotalesCrupier <= 21) {
			cout << "El crupier ha obtenido la mayor puntuacion, la banca siempre gana. Prueba suerte otro dia\n";
		} 
		else if (puntosTotalesCrupier == puntosTotales) {
			cout << "Habeis empatado a puntos, no hay un ganador\n";
		}
		else if (puntosTotales > 21) {
			cout << "Te has pasado de 21, la banca siempre gana. Prueba suerte otro dia\n";
		}
		else if (puntosTotalesCrupier > 21) {
			cout << "El Crupier ha pasado los 21 puntos, has ganado la partida!\n";
		}
		else {
			cout << playerName << " ha obtenido la mayor puntuacion, enhorabuena, has derrotado a la banca y has ganado la partida\n";
		}
}
