#include <iostream>

using namespace std;

int main() {

// Operador ternário é um IF simplificado onde ele é mais simples é mais rápido sua execução entretanto ele possu limitação em sua complexidade
	//Essa é a sintaxe do operador ternário (Expressão) ? volor1 : valor2
	int nota1, nota2,m;
	string res;
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;

	m = (nota1 + nota2)/2;

	//(m >= 10) ? res="Passou de ano" : res="Reprovou";//Primeira forma de fazer
	res = (m >= 10) ? "Aprovado" : "Reprovado";//Segunda forma onde ele usa o retorno do if como conteudo


	cout << "\n" << res << "\n";

	
	return 0;
}