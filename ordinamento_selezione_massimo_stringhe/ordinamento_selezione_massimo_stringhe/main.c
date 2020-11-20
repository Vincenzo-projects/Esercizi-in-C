//
//  main.c
//  ordinamento_selezione_massimo_stringhe
//
//  Created by Vincenzo on 17/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 8
void ord_sel_max(char array_stringhe[][50], int n);
int max_ind(char array_stringhe[][50],int n);
void scambiare(char *a,char *b);

int main()
{
    int n, i;
    char elenco[][50]={"Pippo", "Gastone", "Qui", "Pluto", "Zio Paperone", "Paperina", "Paperino","Zo"};
    n=N;
    printf("Elenco non ordinato:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n", elenco[i]);
    }
    ord_sel_max(elenco,n);
    
    printf("\nElenco ordinato:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n", elenco[i]);
    }
}

void scambiare(char *a, char *b)
{
    char temp[50];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

void ord_sel_max(char array_stringhe[][50],int n)
{
    int i,max_indice;
    for(i=0;i<n-1;i++)
    {
        max_indice=max_ind(&array_stringhe[i],n-i);
        
        scambiare(array_stringhe[i], array_stringhe[max_indice+i]);
    }
}

int max_ind(char array_stringhe[][50],int n)
{
    int i=0, i_max;
    i_max=0;
    for(i=1; i<n ;i++)
    {
        if(strcmp(array_stringhe[i], array_stringhe[i_max])>0)
        {
            i_max=i;
        }
    }
    return i_max;
}
