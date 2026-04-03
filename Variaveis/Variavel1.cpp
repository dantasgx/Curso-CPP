#include <iostream>
#include <iomanip>

int main()
{
	int NumComputadores;
	int SerialComputadores;
	float Numero2;
	Numero2 = 55.56f;
	double Numero3;
	Numero3 = 456324.2454532;
	char Caractere = '3';
	char Caractere2 ='k';
	NumComputadores = 100;
	SerialComputadores = 11111;
	bool bAchou;
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << std::endl;
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << std::endl;
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << std::endl;
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << std::endl;
	

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tNumComputadores: " << NumComputadores << std::endl;
	std::cout << "\tSerialComputadores: " << SerialComputadores << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Valor Numero: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero2) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na Memoria: " << &Numero2 << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Valor Numero: " << std::setprecision(14) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero3) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na Memoria: " << &Numero3 << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Caractere) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na Memoria: " << (void *)&Caractere << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Caractere2) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na Memoria: " << (void *)&Caractere2 << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	

	system("PAUSE");
	return 0;
}