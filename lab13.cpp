#include <iostream>
int addition(int a, int b=0)
{
    int r;
    r=a+b;
    return r;
}

int main(void)
{
    int x,y,z;
    x=5;
    y=3;
    z=addition(x,y);
    std::cout<< "The result is " <<z<<"\n";
    z=addition(x);
    std::cout<< "The result is " <<z<<"\n";
    return 0;
}
//Este ejercicio imprime 8 y 5. Ya que si tiene las dos variables, calcula su valor con estas pero si solo ingresa x el valor de y está definido como b=0. (Default arguments)


