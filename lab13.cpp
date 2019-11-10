#include <iostream>
int operate(int a,int b)
{
   return (a*b);
}
double operate(double a, double b)
{
    return (a/b);
}

int main(void)
{
    int x=5,y=2;
    double n=5.0,m=2.0;
    std::cout<< operate(x,y)<<"\n";
    std::cout<< operate(n,m)<<"\n";
    return 0;
}
//Imprime 10 y 2,5. Cada funcion recibe los parametros correspondientes así tengan el mismo nombre. (overloaded functions)


