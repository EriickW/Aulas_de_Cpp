#include <iostream>

using namespace std;

int main(){
    //Array bidimensional / Matriz são iguais aos arrays normais entretanto pode-se controlar mais de uma dimensão ou seja ele possui mais de um indice de controle
    //Ela pode ser comparada como uma tabela
    /*
    int matriz[linhas][colunas]

    */

    int matriz[3][4];
    int l,c;

   /* matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=0;
    matriz[1][3]=0;

    matriz[2][0]=1;
    matriz[2][1]=1;
    matriz[2][2]=0;
    matriz[2][3]=0;*/

    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
          matriz[l][c]=l;
        }

    }
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
          cout<<matriz[l][c];
        }
    cout<<"\n";
    }


return 0;
}
