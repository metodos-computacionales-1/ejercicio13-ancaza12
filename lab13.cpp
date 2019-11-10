#include <iostream>
int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z,a,b,c;
    z=subtraction(7,2);
    std::cout<< "The first result is " <<&z<<"\n";
    a=subtraction(7,2);
    std::cout<< "The second result is " <<&a<<"\n";
    b=subtraction(x,y);
    std::cout<< "The third result is " <<&b<<"\n";
    c=4+subtraction(x,y);
    std::cout<< "The fourth result is " <<&c<<"\n";
    return 0;
}
//Este ejercicio imprime: The result is 0x7fffbaa1eac para los 4 casos pero si les cambio el nombre de la variable, todas ocupan un espacion de memoria diferente. (Ejercicio 1)