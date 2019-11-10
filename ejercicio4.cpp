#include <iostream>
int getMaxInt(int a,int b)
{
   if (a>b){
       return a;
   }
   else{
       return b;
   }
}
double getMaxDouble(double a, double b)
{
   if (a>b){
       return a;
   }
   else{
       return b;
   }
}

int main(void)
{
    int x=5,y=2;
    double n=3.0,m=2.0;
    std::cout<< getMaxInt(n,m)<<"\n";
    std::cout<< getMaxDouble(x,y)<<"\n";
    return 0;
}

//Cuando los nombres de las funciones son diferentes se obtiene 5 y 5 como resultado. Al cambiar los nombres por el mismo, se sigue obteniendo el mismo valor ya que la funcion que recibe double escoge los valores de double y la de int los valores de int. 