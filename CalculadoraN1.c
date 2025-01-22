#include <stdio.h>

void Suma(float a, float b);
void Resta(float a, float b);
void Division(float a, float b);
int RecibirParametros();

int main(){
    float A[2];
    int x;
    for(x=0; x<2 ; x++){
        A[x] = RecibirParametros();
        printf("%f\n", A[x]);
    }
    
    Suma(A[0], A[1]);
    Resta(A[0], A[1]);
    Division(A[0], A[1]);

    return 0;
}

int RecibirParametros(){
    float a;
    printf("Introduzca un valor:\t");
    scanf("%f", &a);

    return a;
}

void Suma(float a, float b){
    float c;
    c = a+b;
    printf("La suma es:  %.2f\n", c);
}

void Resta(float a, float b){
    float c;
    c = a - b;
    printf("La resta es:  %.2f\n", c);
}


void Division(float a, float b){
    float c;
    c = a/b;
    printf("La division es: %.2f\n", c);
}