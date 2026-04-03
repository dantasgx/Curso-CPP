#include <iostream>
// Para usar #define precisa colocar aqui abaixo dos includes
// #define NUM_VIDAS 10
// Observe que nçao tem ; no final!!

int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << std::endl;
	std::cout << "Valor da Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereco de Memoria de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");
	return 0;
}