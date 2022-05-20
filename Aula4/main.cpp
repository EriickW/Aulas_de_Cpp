#include <iostream>

using namespace std;

//Variaveis criadas fora de funções sao de escopo global ou seja pode ser usada dentro de todo codigo

int n1,n2;//Exemplos de variaveis globais

int main(){
//Variaveis criadas aqui dentro so pode ser usada aqui ou seja o escopo é local

  int n3, n4,res; //Exemplo de Variaveis locais

  //Operadores matemáticos: +(soma) -(subtração) /(divisão) *(exponenciação) %(resto da divisão)

  n1=11;
  n2=10;
  n3=5;
  n4=2;

  res = n1 + n2 + n3 + n4;
  cout << res << "\n";

  system("pause");
  return 0;
}