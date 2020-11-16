//
//  main.c
//  Array_2D
//
//  Created by Vincenzo on 14/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
/*Realizzare un programma che trovi l'elemento massimo di un array 2D con notazione standard*/
int massimo_array2D(int a[100][100], int n, int m);
void visualizza_array2D(int a[100][100], int n, int m);
int main()
{
    int n, m,i,j,a[100][100], massimo;
    printf("Inserisci il numero di righe (<=100):");
    scanf("%d", &n);
    printf("Inserisci il numero di colonne (<=100):");
    scanf("%d", &m);
    printf("Adesso immetti i numeri:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    massimo=massimo_array2D(a, n, m);
    printf("\nIl massimo elemento dell'array e' questo:%d", massimo);
    
    printf("\nRicordiamo che l'array totale e' questo:\n");
    visualizza_array2D(a,n,m);
}
int massimo_array2D(int a[100][100], int n, int m)
{
    int i, j,max_array;
    max_array=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>max_array)
            {
                max_array=a[i][j];
                    
            }
        
        }
            
        
    }
    return max_array;
    
    
}

void visualizza_array2D(int a[100][100], int n, int m)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}
