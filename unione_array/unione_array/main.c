//
//  main.c
//  unione_array
//
//  Created by Vincenzo on 05/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Unione( int A[], int B[], int C[]);

int appartiene (int A[], int x)
{
    int i;
    for (i=0;i<3;i++)
        if (x==A[i])
            return 0;
    return 1;
}

int main()
{
   
    int A[3]={3,2,1}, B[3]={3,2,8}, C[6];   //Dichiaro 2 vettori
 int i,m;
    m = Unione(A,B,C);
    printf("L'unione e' data da:\n");
    for(i=0; i<m; i++)
        printf("%d ",C[i]);
    printf("\n");
    
    return 0;
}
int Unione (int A[], int B[], int C[])
{
int i,j;
    j=3;
for (i=0;i<3;i++)
C[i] = A[i];

for (i=0;i<3;i++)
if (appartiene(A,B[i]))

    C[j++] = B[i];
    return j;
}

