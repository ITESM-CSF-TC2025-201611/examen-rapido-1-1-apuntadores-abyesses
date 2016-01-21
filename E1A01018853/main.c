//
//  main.c
//  E1PAA
//
//  Created by Abraham Esses on 1/21/16.
//  Copyright © 2016 Abraham Esses. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void frecuencia(char*);
void swapInt(void * , void * );
long int longitud(char * cadena);
void ordenaCadena(char *cadena);
int main(int argc, const char * argv[]) {
    char *a = (char *)malloc(sizeof(char));
    ordenaCadena(a);
    printf("Hello, World!\n");
    free(a);
    return 0;
}

void frecuencia(char* a){
    int i=0;
    
    while( *(a+i) != '/0'){
        printf("%s",*(a+i));
        i+=1;
    }
}
char descChar(void * pa, void * pb)
{
    char * a = (char *)pa;
    char * b = (char *)pb;
    return (*a < *b);
}


void ordenaCadena(char *cadena){
    int i=*cadena;
    char *cadOrdenada = (char*)malloc(sizeof(char*));
    strcpy(cadOrdenada,cadena);
    for(;i<longitud(cadena);i++){
        cadOrdenada+=descChar(*(cadena+i), *(cadena+(i+1)));
    }
    printf("%s",cadOrdenada);
    //frecuencia(cadOrdenada);
    free(cadOrdenada);

}
long int longitud(char * cadena)
{
    char * p = cadena;
    while (*p++ != '\0'){};
    
    return (p - cadena - 1);
}
