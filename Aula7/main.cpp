#include <iostream>

using namespace std;
	
	int main(){
		
		int n1 , n2,s;
		char opc='s';
		
		cout << "Digite um numero: ";
		cin >> n1;
		
		cout << "Digite outro numero: ";
		cin >> n2;
		
		s = n1 + n2;
		 cout << "A soma entre "<< n1 <<" e "<< n2 << " tem o valor de " << s << "\n";
		
		//o if � um comando de teste l�gico que faz determinada fun��o quando o valor do teste logico for verdadeiro ou falso em poucas palavras � como se fosse o se algo acontecer fa�a isso sen�o fa�a isso
		
		/* se(teste logico){
		 se o teste for verdadeiro 
		}sen�o / caso contrario{
		se o teste for falso
		}*/
		
		
		
		/*teste l�gico
		
		> ; < ; <= ; >= ; == ; !=;
		
		*/	
		if(s>=10){
			cout << "O valor da soma e maior que 10 \n" ;
		}else{
			cout << "O valor e menor que 10 \n";
		}
		
		return 0;
	}
