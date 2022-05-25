#include <iostream>

using namespace std;

int main(){
    // break serve para interronper uma seqeuncia de loop
    int cont;

    cont=0;

    while(cont<10){
        std::cout<<cont<<"\n";
        cont++;
        if(cont>5){
            break;
        }
    }

return 0;
}
