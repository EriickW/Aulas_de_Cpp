#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char palavra[30];
    char secreta[30];
    char letra[1];
    int tam,i,chances,acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;


     cout << "\n Esse e um jogo da forca para se jogado com alguem a mais\n" << "Peça para alguem digitar alguma palavra: ";
     cin >> palavra;
     system("cls");

     while(palavra[i] != '\0'){//o \0 se refera a quando o usuario aprertar o ente ou seja quando o usuario da fim a string
        i++;
        tam++;
     }
     for(i=0;i<30;i++){
        secreta[i]='-';
     }

     while((chances>0)&&(acertos<tam)){
        cout <<"Chances restantes: "<<chances<<"\n";
        cout<<"Palavra secreta: ";
        for(i=0;i<tam;i++){
            cout <<secreta[i];
        }
       cout <<"\n\n Digite uma letra: ";
       cin >> letra[0];
       for(i=0;i<tam;i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acerto++;
            }
       }
       if(!acerto){
        chances--;
       }

       acertos=false;
       system("cls");
     }

    if(acertos==tam){
        cout<<" Voce venceu\n";
    }else{
        cout<<"Voce perdeu\n";

    }

    system("pause");
return 0;
}
