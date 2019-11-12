#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    float * array = new float [N];
    for(int i =0;i<=N;i++)
    {
        array[i]=i;
    }
    return 0;
}

// de error se obtiene segmentation fault, pero el error se quita al multiplicar el ejecutable por un numero más grande. Sin embargo esto no imprime ningun resultado.