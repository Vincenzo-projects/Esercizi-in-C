//
//  main.c
//  uguaglianza_insieme_array
//
//  Created by Vincenzo on 08/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>

int uguaglianza_array(int a[], int b[], int n);

int main()
{
    int a[]={3,4,6,7,8,9};
    int n=6;
    
    int b[]={3,4,6,7,8,9};
    
    if (uguaglianza_array(a,b,n))
    printf("\nArray è uguale:");
   
    else {
        printf ("\ngli array non sono uguali");
    }
    
    return 0;
}


int uguaglianza_array(int a[], int b[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    if(a[i]!=b[i])
        return 0;
        
    return 1;
}
