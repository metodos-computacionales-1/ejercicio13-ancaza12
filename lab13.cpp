#include <iostream>

int main(void){
    int ant,act,aux;
    ant=0;
    act=1;
    for (int i = 0; i<10; i++){
        std::cout<< "  " <<act<<"\n";
        aux= act;
        act= act + ant;
        ant= aux;
    }
    return 0;
}
//Este ejercicio imprime la serie fibonacci con los primeros 10 numeros (Ejercicio3)


