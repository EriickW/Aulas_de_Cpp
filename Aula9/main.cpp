#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	/*	Operadores l�gicos 
		 
		 and / && / E
		 Operador L�gico onde o valor de resposta � verdadeiro se todas as vari�veis de entrada forem verdadeiras
		 
		  OR / || / ou
		  Operador l�gico onde o valor de resposta da opera��o � verdadeiro se pelo menos uma das variaveis de entrada for verdadeira
		  
		  ! / not 
		  Operador l�gico onde ovalor ser� invertido 
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
