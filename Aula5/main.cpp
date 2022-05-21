#include <iostream>

using namespace std;

int main(){
  int n1, n2;

  n1=0;
  n2=10;

  n1=n1+1;//forma tradicional de fazer incremento de 1
  n2++;//Outra forma de incremento

  cout << n1 <<"\n" << n2 << "\n";
  n1=n1-1;//forma tradicional de fazer decremento
  n2--;//Forma mais atua de fazer o decremento
  n1+=10;//ele soma mais 10 a variavel
  n1-=10;//ele subitrai mais 10 a variavel
  n1*=10;//ele multiplica 10 a variavel
  n1/=10;//ele divide 10 a variavel

//n++ (chamada de pos incremento ou pos fixados ou seja ele soma o valor depois )
//++n (chamada de pré incremento ou pré fixados ou seja ele soma o valor antes)

  cout << n1 <<"\n" << n2 << "\n";

  system("pause");
  return 0;
}