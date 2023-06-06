#include <stdio.h>
#include <math.h>

float ingreseComponente(char componente, int i){
    float a;
    printf("Ingrese la componente %c del cono: ", componente, i);
    scanf("%f", &a);
    return a;
}

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2){
    float dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
    return dist;
}

float calcularVolumen(int cono1[3][3]){
    float radio = calcularDistancia(cono1[0][0], cono1[0][1],cono1[0][2],cono1[1][0],cono1[1][1],cono1[1][2]);
    float altura = calcularDistancia(cono1[0][0], cono1[0][1],cono1[0][2],cono1[2][0],cono1[2][1],cono1[2][2]);
    float volumen = (3.14*pow(radio,2)*altura)/3;
    float radio2=radio/2;

    float volumentrun =((3.14*(altura/2))*(pow(radio,2)+pow(radio2,2)+(radio*radio2)))/3;
    float volsup= volumen-volumentrun;

    printf("El volumen es: %.2f\n",volumen);
    printf("El volumen truncado es: %.2f\n",volumentrun);
    printf("El volumen superior es: %.2f\n",volsup);

    return volsup;
}

void imprimirVolumenArea(float volumen1,float volumen2,int cono1,int cono2){
    printf("El volumen del cono 1 es: %.2f\n",volumen1);
    printf("El volumen del cono 2 es: %.2f\n",volumen2);
    printf("El volumen total es: %.2f\n",volumen1+volumen2);
}