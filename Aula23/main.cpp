#include <iostream>

using namespace std;
void contador(int num,int cont=0);
int main(){
 //Funções recursivas (recursividade), são funções que chamam a si mesma varias vezes
    contador(10);

return 0;
}
void contador(int num, int cont){
    cout<<cont<<"\n";
    if(num>cont){
        contador(num,++cont);
    }
}
