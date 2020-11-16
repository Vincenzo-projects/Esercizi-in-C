//
//  main.c
//  numero parole_in_ARE
//
//  Created by Vincenzo on 14/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Trova_are(char Testo[]);
int main()
{
    char testo[]="creare il mare are are";
    printf("\nLe parole che terminano in are sono %d", Trova_are(testo));
    getchar();
    return 0;
}

int Trova_are(char Testo[])
{
    int i=0, cnt=0;
    int n=3;
    for(i=0;Testo[i]!='\0';i++)
    {
        if((strncmp(&Testo[i],"are",n))==0)
        {
            if(Testo[i+n]==' '||Testo[i+n]=='\0')
               cnt++;
        }
    }
    
    return cnt;
}
