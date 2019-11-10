#include <iostream>
long factorial(long n)
{
    int a=n;
    if (a>1)
        return (a*factorial(a-1));
    else
        return 1;
}

int main(void)
{
    long number=9;
    std::cout<< number<<"! = " <<factorial(number)<<"\n";
    return 0;
}
//Este ejercicio imprime el valor de 9! que es el valor que entra. (Recursive functions)


