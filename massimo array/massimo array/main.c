//
//  main.c
//  massimo array
//
//  Created by Vincenzo on 04/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
int massimo_array2d (int a [100][100],  int n, int  m);
int main(void)
{ int n,m,i,j, a [100][100], massimo;
    printf ("inserire numero di righe (<100):\n");
    scanf ("%d", &n);
    
    printf ("inserire colonne (<100):");
    scanf ("%d", &m);
    
    printf ("adesso imetti i numeri:\n");
     
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    massimo=massimo_array2d(a,n,m);
    printf ("il massimo valore array è:%d", massimo);
}
int massimo_array2d (int a[100][100],int n,int m)
{
    int i,j,massimo_array;
    massimo_array= a[0][0];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (a[i][j]>massimo_array)
            {
                massimo_array= a[i][j];
                
            }
            
        }
    }
    return massimo_array;
}
