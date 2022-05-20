#include <iostream>

using namespace std;

int main()
{
  // Para declarar uma variavel percisa indicar o "tipo" o "nome" e o "valor inicial"

  char letras = 'E';                           // Recebe apenas caracteres
  double numeros_com_virgula = 2.5;            // Numeros decimais com maior precisão
  float numeros_com_virgula2 = 2.4;            // Numeros decimais com menor precisão
  int vida = 0;                               // Tipos número
  bool vivo = false;                           // Tipo lógico recebe so verdadeiro ou falso 1 significa true  e 0 false
  string nome = "Erick Willian Soares Afonso"; // Recebe mais letras

  cout << "Digite o numero de vidas \n"; // cout serve para mandar conteudos usando os sinais <<
  cin >> vida;                           // serve para receber dados e usa os sinais de >> para atribuir o valor a variavel
  cout << letras << endl
       << numeros_com_virgula << endl
       << numeros_com_virgula2 << endl
       << vivo << endl
       << nome << endl
       << vida << endl;
  system("pause");
  return 0;
}