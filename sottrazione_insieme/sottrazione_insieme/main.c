//
//  main.c
//  sottrazione_insieme
//
//  Created by Vincenzo on 08/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>

void Sottrazione(int n_a, int n_b, int n_c, int A[], int B[], int C[]);

int main() {
    
    int i, n_a=3, n_b=3, n_c=0;
    int A[100]={7,2,1}, B[100]={3,2,1}, C[200];
    
    Sottrazione(n_a, n_b, n_c, A[], B[], C[]);
    printf("Il vettore sottratto e': ");
    for(i=0; i<n_c; i++)
    {
        printf("%d ", C[i]);
    }
    return 0;
}
void Sottrazione(int n_a,int n_b,int n_c,int A[],int B[],int C[])
{
    n_c=0;
    int i;
    for(i=0; i<n_a; i++)
    {
        if(!Appartiene(n_b, B[], A[i]))
         {
           C[n_c]=A[i];
           n_c++;
         }
    }
}
