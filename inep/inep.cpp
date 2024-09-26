#include <iostream>
int main()
{
	std::string entrada;
	std::cout << "Hola INEP!\n";
	std::cout << "----------\n";
	std::cout << "Escriu un nom:";
	std::cin >> entrada;
	std::cout << "Has escollit el nom " + entrada + "\n";
}

// primer cambio