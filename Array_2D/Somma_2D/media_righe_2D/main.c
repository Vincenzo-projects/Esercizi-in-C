//
//  main.c
//  Somma_2D
//
//  Created by Vincenzo on 15/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>

void visualizza_array(double media_righe[100], int m);
void leggi_da_tastiera2D(int a[][100], int m, int n );
void media_array2D(int a[][100], int m, int n,double media_righe[]);
int main()
{
    int n,m,a[100][100];
    double media_righe[100];
    printf("Inserisci il numero di righe (<=100):\n");
    scanf("%d", &m);
    printf("Inserisci il numero di colonne (<=100):\n");
    scanf("%d", &n);

    leggi_da_tastiera2D( a, m, n );
    media_array2D(a, m, n,media_righe);
    visualizza_array(media_righe,m);
    
}

void media_array2D(int a[][100], int m, int n, double media_righe[])
{
    int i,j;
   // float somma;
    double somma=0.0;
    for(i=0;i<m;i++){
        somma=0.0;
        for(j=0;j<n;j++)
        {
            somma=somma+ a[i][j];
        }
    
    media_righe[i]=somma/n;
    }
}
void leggi_da_tastiera2D(int a[][100], int m, int n)
{
    int i,j;
    printf("\nInserisci gli elementi di una matrice\n");
    for(i=0;i<m;i++)
        for (j=0;j<n;j++)
        {
            printf("dammi l'elemento A[%d][%d]-->", i,j);
            scanf("%d", &a[i][j]);
        }
            
}
void visualizza_array(double media_righe[], int m)
{
    int i;
        for(i=0;i<m;i++)
        {
            printf("il numero %d-esimo è %lf\n", i,media_righe[i]);
        }
        printf("\n");
}
