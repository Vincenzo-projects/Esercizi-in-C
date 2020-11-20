//
//  main.c
//  ordinamento_selezione_massimo
//
//  Created by Vincenzo on 17/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//


#include<stdio.h>
void ord_sel_max(char array[], int n_a);
void max_val_ind(char a[], int n, char *max_array, int *i_max);
void scambiare_c(char *c1, char *c2);
void visualizza_array(char a[], int n);
int main()
{
    int n_a,n;
    char a[]={'p','z','a','r','b','c','m','s','d','n','o','e','g','f','u','w','t','h'};
    n_a=18;
    printf("\nArray non ordinato:\n");
    visualizza_array(a,n_a);
    ord_sel_max(a,n_a);
    printf("\nArray ordinato:\n");
    visualizza_array(a,n_a);
    
}
void scambiare_c(char *c1, char *c2)
{
    char temp;
    temp= *c1;
    *c1=*c2;
    *c2=temp;
}
void visualizza_array(char a[], int n)
{
    int i;
    for(i=0;i<18;i++)
    {
        printf("%3c", a[i]);
    }
}
void ord_sel_max(char array[], int n_a)
{
    int i, indice_max;
    char max_array;
    for(i=0;i<n_a-1;i++)
    {
        max_val_ind(&array[i],n_a-i, &max_array, &indice_max);
        scambiare_c(&array[i], &array[indice_max+i]);
    }
}
void max_val_ind(char a[], int n, char *max_array, int *i_max)
{
    int i;
    *max_array=a[0];
    *i_max=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>*max_array)
        {
            *max_array=a[i];
            *i_max=i;
        }
    }
}
