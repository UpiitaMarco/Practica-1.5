#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int t;
char x,y;
float r;
printf("Instituto Politecnico Nacional \nUnidad Profesional Interdisciplinaria en Ingenieria y Tecnologias Avanzadas \n\nIntroduccion a la Programacion \nPractica 1.5: Programa que lea la temperatura en grados Celsius \ny convierta a Farenheit y viceversa.");  
printf("\n\nIngrese la unidad de temperatura (C) o (F)");
scanf("%c", &x);
printf("Ingrese el valor de temperatura:");
scanf("%d", &t);
r= (x=='C')? (((9*t)/5)+32):((5*(t-32))/9);
y= (x=='C')? 'F':'C';
printf("El valor de %d en %c equivale a %f en grados %c.\n",t,x,r,y);
system("PAUSE");	
return 0;
}
