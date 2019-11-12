#include<iostream>
#include <cmath>
#include <math.h>

void relleno(int n,float **matriz);
void imprimeMatriz(int n,float **matriz);
void multiplica(int n, float **matriz1, float **matriz2, float **c);

int main(){
    int n;
    std::cout << "Elija el n del tamaño de la matriz nxn"<< std::endl;
    std::cin >> n;
    float ** matriz = new float *[n];
    float ** c = new float *[n];
    
    for (int i = 0; i < n; ++i){
        matriz[i] = new float[n];
        c[i]= new float[n];
    }
    relleno(n,matriz);
    imprimeMatriz(n,matriz);
    multiplica(n, matriz, matriz,c);

    
    delete []matriz;
    delete []c;
    return 0;
}

void relleno(int n,float **matriz){
    for(int co=0; co<n; co++){ 
        for(int fi =0; fi<n;fi++){
            float result;
            
            if(co==0 && fi==n-1){
                result= 1-n;
                matriz[fi][co]= result;
            }
            else if(fi==n-1){
                result= -n;
                matriz[fi][co]= result;   
            }
                
            else if(fi==co-1){
                result= n+2;
                matriz[fi][co]= result;
            }
            
            else if(co==0){
                result=2.0;
                matriz[fi][co]= result;
            }
            else{
                result= 1;
                matriz[fi][co]= result;
            }   
        }
    }  
}

void imprimeMatriz(int n,float **matriz){
    std::cout << "Matriz"<< std::endl;
    for(int co =0; co<n;co++){
        for(int fi=0; fi<n; fi++){ 
            std::cout << matriz[fi][co]<< "  ";
            std::cout.precision(16);
            std::cout.setf(std::ios::scientific);

        }
        
    std::cout<< std::endl;        
    }
}


void multiplica(int n, float **matriz1, float **matriz2, float **c){
    std::cout << "Multiplicación"<< std::endl;
    
    for(int co =0; co<n;co++){
        for(int fi=0; fi<n; fi++){
            for (int z=0; z<n; z++){
                c[fi][co]+= matriz1[fi][z]*matriz2[z][co];
                
            }
            std::cout <<c[fi][co]<< "  ";
            std::cout.precision(16);
            std::cout.setf(std::ios::scientific);
        }   
    std::cout <<2<< "  ";
    std::cout<< std::endl;        
    }       
}