#include <iostream>

using namespace std;

int main() {

// Operador tern�rio � um IF simplificado onde ele � mais simples � mais r�pido sua execu��o entretanto ele possu limita��o em sua complexidade
	//Essa � a sintaxe do operador tern�rio (Express�o) ? volor1 : valor2
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