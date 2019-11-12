#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    double array[N];
    for(int i =0;i<N;i++)
    {
        array[i]=i;
    }
    return 0;
}

//Sale de error segmentation fault. Luego de arreglarlo, se realiza el ejecutable de la forma en la cual lo piden con el flag y no sucede nada. El error se elimina