#include <iostream>

using namespace std;

void fatorial(int num,int cont=0);

int main(){
   //Ex001 Fatorial

    fatorial(4);

return 0;
}

void fatorial(int num){
    int res,cont;
    cont=num;
    if(cont<=num && cont>0){
        res=num*cont;
        cout<<res<<"\n";
        fatorial(num,--cont);
    }

}
