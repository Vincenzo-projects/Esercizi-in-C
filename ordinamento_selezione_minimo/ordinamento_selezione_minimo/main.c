//
//  main.c
//  ordinamento_selezione_minimo
//
//  Created by Vincenzo on 17/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include<stdio.h>
void ord_sel_min(char array[], int n_a);
void min_val_ind(char a[], int n, char *min_array, int *i_min);
void scambiare_c(char *c1, char *c2);
void visualizza_array(char a[], int n);
int main()
{
    int n_a,n;
    char a[]={'p','z','a','r','b','c','m','s','d','n','o','e','g','f','u','w','t','h'};
    n_a=18;
    printf("\nArray non ordinato:\n");
    visualizza_array(a,n);
    ord_sel_min(a,n_a);
    printf("\nArray ordinato:\n");
    visualizza_array(a,n);
    
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
void ord_sel_min(char array[], int n_a)
{
    int i, indice_min;
    char min_array;
    for(i=0;i<n_a-1;i++)
    {
        min_val_ind(&array[i],n_a-i, &min_array, &indice_min);
        scambiare_c(&array[i], &array[indice_min+i]);
    }
}
void min_val_ind(char a[], int n, char *min_array, int *i_min)
{
    int i;
    *min_array=a[0];
    *i_min=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<*min_array)
        {
            *min_array=a[i];
            *i_min=i;
        }
    }
}
