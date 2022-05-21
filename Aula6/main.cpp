#include <iostream>

using namespace std;

int main(){
	int num=10;
	
	cout << num << "\n";
	//num = num * (-1);// maneira comun de inverter valores de variaveis de positivo para negativo
	
	//num *= -1;//forma mais simplificada de fazer
	
	//cout << -num << "\n"; //outra forma de inverter o valor entretanto ele nao guarda no valor da variavel
	
	num =-num;// tambem pode ser usado dessa forma que ao invez de mutiplicar ele realmente vai estar invertendo o valor
	cout << num << "\n";
	
	
	return 0;
}
