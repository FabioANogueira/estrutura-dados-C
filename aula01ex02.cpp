#include <iostream>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Portuguese_Brazil.1252");

	int n1;
	int n2;

	std::cout << "Digite um número: ";
	std::cin >> n1;
	std::cout << "Digite outro número: ";
	std::cin >> n2;

	int sum = n1 + n2;
	std::cout << "A soma é: " << sum << std::endl;
	int sub = n1 - n2;
	std::cout << "A subtração é: " << sub << std::endl;
	int mult = n1 * n2;
	std::cout << "A multiplicação é: " << mult << std::endl;	
	int div = n1 / n2;
	std::cout << "A divisão é: " << div << std::endl;
	float fdiv = (float)n1 / (float)n2;
	std::cout << "A divisão (float) é: " << fdiv << std::endl;
	int mod = n1 % n2;	
	std::cout << "O resto da divisão é: " << mod << std::endl;


	return 0;
}
