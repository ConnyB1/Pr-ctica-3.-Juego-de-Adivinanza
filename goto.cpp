//Nombre del archivo: Práctica 3. Juego de Adivinanza con Etiquetas y “goto”.c
//Autor: Cesar Alejandro Velazquez Mercado
//Fecha de creación: 13 de septiembre de 2023
//Descripción: Este archivo contiene el código principal de mi programa donde se utiliza la funcion goto.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
    int ran, comp, intento=0;
    srand(time(NULL)); // me dara un numero aleatorio siempre
    inicio:
        {
            comp=rand()%100 +1; //me generará un numero aleatorio entre 1 y 100
            printf("Hola, en este juego deberas adivinar un numero aleatorio asi que dame tu primer numero: ");
        }
    adivinanza: //me regresare a esta etiqueta a traves de "goto"
        {
            scanf("%d",&ran);
            intento=intento+1;
        }
    if(ran==comp)
        {
            printf("Ganaste!!!");
            printf("\nhiciste %d intentos", intento);
        }
    else
        {
            if(ran>comp)
                {
                    printf("El numero que buscas es menor ");
                }
            else
                {
                    printf("El numero que buscas es mayor ");
                }
            goto adivinanza;
        }
    int op;
    reinicio:
        {
            printf("\n\nquieres jugar de nuevo? \n1)si    \n2)no \n ");
            scanf("%d",&op);
            if(op==1)
                {
                    intento=0; //reinicia los intentos
                    goto inicio;
                }
            else
                {
                    if(op==2)
                        {
                            printf("Adios");
                        }
                    else
                        {
                            printf("error\n\n");
                            goto reinicio; //Me regresa a reinicio
                        }
                }
        }
    

    
}