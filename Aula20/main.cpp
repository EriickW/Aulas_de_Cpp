#include <iostream>

using namespace std;


//Para poder usar fun��es primeiro � necess�rio apresenta-las ao programa colocando elas antes do main
void texto();
void soma(int n1,int n2);
int soma2(int n1, int n2);
//==============================================================================


int main(){
    //Fun��es s�o trechos de codigos que pode m ser utilizado em qualque parte do codigo deixando a assim mais produtivo a codifica��o
 texto();
 soma(10,20);


 int res;
 res = soma2(110,2);

 cout<<"Valor de res: "<<res<<"\n";
return 0;
}

void texto(){//o void significa que o retorno dele vai ser vazio ou seja ele nao ira ser mostrado ate ser chamado a fun��o
    cout<<"Ola mundo!!\n";
}

void soma(int n1,int n2){
    cout<<"Soma dos valores "<<n1+n2<<"\n";
}
int soma2(int n1, int n2){
    return n1+n2;
}
