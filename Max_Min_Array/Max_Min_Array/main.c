//
//  main.c
//  prova
//
//  Created by Vincenzo on 15/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
int max_array(int a[], int n,int *max);
int min_array(int a[], int n,int *min);
void legge_numero_inserito(int a[], int n);
void visualizza_array(int a[], int n);
int main()
{
    int a[3], massimo, minimo, n_elem;
    printf("\nInserire il numero di elementi (<=3):");
    scanf("%d", &n_elem);
    legge_numero_inserito(a,n_elem);
    max_array(a,n_elem,&massimo);
    printf("\nIl massimo tra gli elementi vale:%d", massimo);
    min_array(a,n_elem,&minimo);
    printf("\nIl minimo tra gli elementi vale:%d", minimo);
    printf("\nRicordiamoci che l'array e' questo qui:\n");
    visualizza_array(a,n_elem);
}
int max_array(int a[], int n,int *max)
{
    int i;
    *max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>*max)
        {
            *max=a[i];
        }
    }
    return *max;
}

int min_array(int a[], int n,int *min)
{
    int i;
    *min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]<*min)
        {
            *min= a[i];
        }
    }
    return *min;
}

void legge_numero_inserito(int a[], int n)
{
    int i;
    for(i=0; i<n;i++)
    {
        printf("Il %d-simo numero e':", i);
        scanf("%3d", &a[i]);
    }
        
}
void visualizza_array(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%3d", a[i]);
    }
}
