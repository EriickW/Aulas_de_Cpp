#include <iostream>

using namespace std;

int main(){
/* Array sao uma coleçao de variavelis de mesmo tipo para declarar um array é necessário declarar um tipo nome[tamanho] por exemplo:

int carros[5]

o tamanho do array pode ser de qualquer tamanho
O o tamanho se refere as posições do vetor por exemplo o vetor carros[5] possui 5 posições ou seja espaços para valores, em um vetor sempre a primeira posição é o 0
*/
int i;//valores inteireso possuem valores em 4 bytes de memoria
 int vetor[5]={10,20,30,40,50};
 /*vetor[0]=10;
 vetor[1]=20;
 vetor[2]=30;
 vetor[3]=40;
 vetor[4]=50;*/

 for(i=0;i<sizeof(vetor)/4;i++){/*Essa função sizeof ela pega o tamanho(memoria) dp item dentro das aspas ou seja o vetor como o vetor tem 5 posições ele vai somar o tamanho de todas as variaveis e vai voltar para a comparação que seria 20 */
    cout<<vetor[i]<<"\n";
 }

return 0;
}
