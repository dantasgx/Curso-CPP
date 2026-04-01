#include <iostream>
// A diretiva de pré-processador #include
// Indica para incluir o arquivo de cabeçalho
// iostream

int main() 
// Função Principal. Todo programa C++ começa com essa função principal main()
{ // Chaves
	// Início de um bloco de 
	// cout comando de saída de dados. Neste caso está solicitando para colocar na saída padrão (tela) a frase especificada
	std::cout << "Vou" << std::endl << "Aprender" << std::endl << "A" << std::endl << "Programar" << std::endl;
	// endl insere um caracter de quebra de linha na frase ("String")
	system("color 5F");
	system("PAUSE");
	// chama o shell do windows (DOS) e coloca esse comando PAUSE
	return 0;
	// Retorna para o sistema operacional
	// Zero é o padrão pra indicar que tudo deu certo! assim, se a função main der certo ela retornará 0 para o sistema operacional
} // Indica o final de um bloco de código

/*CTRL + SHIFT + B - Compilar o código fonte
CTRL + F5 - Executar o programa sem debugalo
ALT + SHIFT + <ENTER> - Maximizar/Minimizar Janela
CTRL + K + C - Comentar o código
CTRL + C no final da linha copia ela toda sem precisar selecionar*/ 