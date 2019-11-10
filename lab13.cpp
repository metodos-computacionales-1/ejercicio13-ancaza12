#include <iostream>
int addition(int a, int b)
{
    int r;
    r=a+b;
    return r;
}

int main(void)
{
    int z;
    z=addition(5,3);
    std::cout<< "The result is " <<z;
    return 0;
}
//Este ejercicio imprime: The result is 8. (Int argument)