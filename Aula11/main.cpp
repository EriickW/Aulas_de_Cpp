#include <iostream>

using namespace std;
 int main(){

 //Switch Case é um comando com funcionalidade semelhante ao IF mas ele possui sua peculiaridades por exemplo ele vai se usado apenas  para testes de igualdade
//Pode-se usar os switch aninhados onde pode-se usar um dentro do ouro
 /*
 switch(expressoa de igualdade com uma constante){
    case constante 1:
        comandos;
        break;

    case cosntante 2;
        coamndos 2;
        breack;
    default;
        coamndos;
 }
 */

    int val;

    //switch normal =========================================================================================
    /*cout << "Selecione uma cor\n: ";
    cout << "[1]-Verde, [2]-Azul, [3]-Vermelho\n";
    cin >>val;

    /*switch (val){
    case 1:
        cout << "Cor selecionada verde\n";
        break;
    case 4:
        cout <<"Cor selecionada azul";
        break;
    case 3:
        cout <<"Cor selecionada vermelho \n";
        break;
    default:
        cout << "Valor selecionado invalido";

    }*/
        //switch normal =========================================================================================


        //switch aninhado =======================================================================================

    cout << "Selecione um transporte\n: ";
    cout << "[1]-Carro, [2]-Moto, [3]-Aviao, [4]-helicoptero\n";
    cin >>val;


switch (val){
    case 1:
    case 2:
        cout << "\n Transporte terrestre\n";
         switch(val){
        case 1:
            cout << " Carro selecionado";
            break;
        case 2:
            cout << "Moto selecionada";
            break;
            }
        break;
    case 3:
    case 4:
        cout << "Transporte aereo";
            switch(val){
        case 3:
            cout << "Avião selecionado";
            break;
        case 4:
            cout << "Helicoptero selecionado";
            break;
            }
           break;
    default:
        cout << "Valor selecionado invalido";

}
        //switch aninhado =======================================================================================
 return 0;
 }
