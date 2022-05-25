#include <iostream>

using namespace std;

int main(){

    //comando de loop Do while ele executa o bloco de comando e testa no final a condição com isso ele garante que o bloco de comando seja executado ao menos uma vez mesmo que a condição ja esteja satisfeita
    /* ja o while se a condição estiver satisfeita for exemplo:

        int cont=20;
         while(cont<20){
          cout<< cont<<"\n";

         }

         cout<<"rotina finalizada";


         //ele vai passar direto pelo while se executar diferente do Do while que executa ao menos uma vez

    */
    int cont=20;
    //ele primeiro ele faz o que o bloco manda depois ele compara
         do{
          cout<< cont<<"\n";
          cont++;
         } while(cont<20);

         cout<<"rotina finalizada";

return 0;
}
