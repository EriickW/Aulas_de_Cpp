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
		
		//o if é um comando de teste lógico que faz determinada função quando o valor do teste logico for verdadeiro ou falso em poucas palavras é como se fosse o se algo acontecer faça isso senão faça isso
		
		/* se(teste logico){
		 se o teste for verdadeiro 
		}senão / caso contrario{
		se o teste for falso
		}*/
		
		
		
		/*teste lógico
		
		> ; < ; <= ; >= ; == ; !=;
		
		*/	
		if(s>=10){
			cout << "O valor da soma e maior que 10 \n" ;
		}else{
			cout << "O valor e menor que 10 \n";
		}
		
		return 0;
	}
