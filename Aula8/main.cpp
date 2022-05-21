#include <iostream>
#include <cstdlib>//uma biblioteca que permite usar o comando system()
using namespace std;

int main(){
	
	int n1,n2, soma;
	string nome_aluno;
	char opc;
	
	inicio://esse inicio se refere a um label ou uma marcação que um comando chamado goto vai voltar e repitir o codigo apartir do label
	
	system("cls");//esse comando permite limpar o console
	
	cout << "Qual o nome do aluno: ";
	cin >> nome_aluno;
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	soma = n1 + n2;
	 
	 if(soma >=60){
	 	cout << "O aluno(a) "<<nome_aluno<<" foi Aprovado \n";
	 }else if(soma >=40) {
	 	cout << "O aluno(a) "<<nome_aluno<<" esta de Recuperacao \n";
	 }else{
	 	cout << "O aluno(a) "<<nome_aluno<<" foi Reprovado \n";
	 }
	
	
	cout << "\n \n" << "Deseja digitar outras notas ? [s/n]: ";
	cin >> opc;
	
	if(opc == 's' or opc == 'S'){
		goto inicio;//goto serve para mandar o codigo para onde está o label ou seja ele repete o codigo apartir do label(marcação) que no caso é o inicio:
	}else{
		cout << "Obrigado pela preferencia :) ";
	}
	
	return 0;
}
