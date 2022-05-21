#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	/*	Operadores lógicos 
		 
		 and / && / E
		 Operador Lógico onde o valor de resposta é verdadeiro se todas as variáveis de entrada forem verdadeiras
		 
		  OR / || / ou
		  Operador lógico onde o valor de resposta da operação é verdadeiro se pelo menos uma das variaveis de entrada for verdadeira
		  
		  ! / not 
		  Operador lógico onde ovalor será invertido 
	*/
	int num;
	
	num=8;
	
	if(num >4 && num<7){
		cout << "\n \n Valor aceito \n";
	}else{
		cout << "\n \n Valor recusado \n";
	}
	
	return 0;
}
