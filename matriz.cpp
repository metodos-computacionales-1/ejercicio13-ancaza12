#include<iostream>
#include <cmath>

void relleno(int n,float **matriz);
void imprimeMatriz(int n,float **matriz);

int main(){
    int n;
    std::cout << "Elija el n del tamaño de la matriz nxn"<< std::endl;
    std::cin >> n;
    float ** matriz = new float *[n];
    for (int i = 0; i < n; ++i){
        matriz[i] = new float[n];
    }
    relleno(n,matriz);
    imprimeMatriz(n,matriz); 
    delete []matriz;
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
                result=2;
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
            std::cout << matriz[fi][co];

        }
    std::cout<< std::endl;        
    }
}