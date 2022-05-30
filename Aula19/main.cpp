#include <iostream>
#include <string.h>//essa é uma biblioteca de string que possui o comando strcmp
using namespace std;

int main(int argc/*Esse primiro parametro armazena a quantidade de argumentos*/, char *argv[]/*Esse segundo parametro armazena os argumentos*/){

    //cout<<argv[0]<<"\n\n";//quando nao é passado nenhum valor para o argv ele armazena o nome e loca do programa para adicionar argumentos so é possivel pelo terminal ou seja nao é possivel usar o cin

    if(!strcmp(argv[1],"sol")){//o comando strcmp faz com que seja possivel a comparação de strings entretanto se o valor for verdadeiro ele retorna o valor 0 e issopara o if é falso é preciso usar o operador lógico ! ou not
        cout<<" Vou ao clube.\n\n";
    }else if(!strcmp(argv[1],"nublado")){
     cout<<" Vou ao cinema.\n\n"
    }else{
        cout<<" Vou ficar em casa.\n\n\"
    }

return 0;
}
