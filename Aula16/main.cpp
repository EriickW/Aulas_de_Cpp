#include <iostream>

using namespace std;

int main(){
/* Array sao uma cole�ao de variavelis de mesmo tipo para declarar um array � necess�rio declarar um tipo nome[tamanho] por exemplo:

int carros[5]

o tamanho do array pode ser de qualquer tamanho
O o tamanho se refere as posi��es do vetor por exemplo o vetor carros[5] possui 5 posi��es ou seja espa�os para valores, em um vetor sempre a primeira posi��o � o 0
*/
int i;//valores inteireso possuem valores em 4 bytes de memoria
 int vetor[5]={10,20,30,40,50};
 /*vetor[0]=10;
 vetor[1]=20;
 vetor[2]=30;
 vetor[3]=40;
 vetor[4]=50;*/

 for(i=0;i<sizeof(vetor)/4;i++){/*Essa fun��o sizeof ela pega o tamanho(memoria) dp item dentro das aspas ou seja o vetor como o vetor tem 5 posi��es ele vai somar o tamanho de todas as variaveis e vai voltar para a compara��o que seria 20 */
    cout<<vetor[i]<<"\n";
 }

return 0;
}
