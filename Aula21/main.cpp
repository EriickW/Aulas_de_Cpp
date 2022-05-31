#include <iostream>

using namespace std;

void soma();
void soma(int n1,int n2);

int main(){

// Sobrecarga de funções é uma funcionalidade do C++ onde é possivel colocar duas funções com mesmo nome que possuam argumentos de entrada diferentes
    soma(20,30);
    soma();

return 0;
}

void soma(int n1,int n2){
    int s;
    s=n1+n2;
    cout<<"\n Soma de "<<n1<<" com "<<n2<<" = "<<s;
}

void soma(){
    int n1,n2,s;
    n1=10;
    n2=20;
    s=n1+n2;
    cout<<"\n\nSoma de "<<n1<<" com "<<n2<<" = "<<s;
}
