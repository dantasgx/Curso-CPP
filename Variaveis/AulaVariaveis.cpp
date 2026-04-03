#include <iostream>
// <locale>
#include <tchar.h>

int main()
{
	// Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));
	// setlocale(LC_ALL, "Portuguese");

	// Declaração de Variáveis
	// Primeiro colocamos qual o tipo de variável que desejamos que o 
	// computador crie ao executar nosso programa 
	// neste caso escolhemos ambas como int (integer)
	// Ou seja, o local da memória que estamos solicitando ao computador
	// deve ser capaz de armazenar números inteiros (-3, -2, -1, 0, 1, 2)
	// "Computador por favor me fonece um local na memória ram com tamanho suficiente"
	int NumVidas = 5;
	// Acima o computador irá alocar um espaço de memória do tipo inteiro
	// Depois vai até este local na RAM e vai colocar o valor 5
	// 010FFDC8 = 5

	int Pontuacao = 1350;
	std::cout << "***********INICIO DO JOGO*********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Variavel NumVidas: " << sizeof(NumVidas) << " Bytes" << "\n";
	std::cout << "Tamanho da Variavel Pontuacao: " << sizeof(Pontuacao) << " Bytes" << "\n";
	std::cout << "Endereco que NumVidas Ocupa na Memoria RAM: " << &NumVidas << "\n";
	std::cout << "Endereco que Pontuacao Ocupa na Memoria RAM: " << &Pontuacao << "\n";
	std::cout << "**********************************" << std::endl;
	std::cout << "***********DURANTE O JOGO*********" << std::endl;

	//Vá até a região de memória Rotulada com o nome Pontuacao e coloque
	// agora em soma o valor que está contido nela + 150
	// Pontuacao = 1350 + 150;
	// Pontuacao = 1500;
	Pontuacao = Pontuacao + 150; // Pontuacao += 150;
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "**********************************" << std::endl;


	system("PAUSE");
	return 0;
}