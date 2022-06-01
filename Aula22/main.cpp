#include <iostream>

using namespace std;
//Em uma função com valores de entrada o mesmo nao pode ficar sem os valores ao ser chamado no programa ou irá dar erro para que possa colocar um argumento padrao basta indicar um valor acima da função principal

void texto(string txt="");

int main(){

texto();

return 0;
}

void texto(string txt){
    cout<<"\n"<<txt<<"\n";
}
