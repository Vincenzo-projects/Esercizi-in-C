//
//  main.c
//  Best_matching
//
//  Created by Vincenzo on 12/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int matching_migliore(char *chiave, char *testo);
int punteggio_matching(char *a, char*b, int n);
int main()
{
    int indice_bm, i;
    char miotesto[50], miachiave[20];
    
    printf("Inserire la chiave:\n");
    gets(miachiave);
    
    printf("Inserire il testo:\n");
    gets(miotesto);
    
    indice_bm=matching_migliore(miachiave, miotesto);
    puts("Risultato del best matching\n");
    
    printf("Inizio sottostringa:%d\n sottostringa di best matching:", indice_bm);
    
    for(i=0;i<strlen(miachiave);i++)
    
        putchar(miotesto[indice_bm+i]);
}
int matching_migliore(char*chiave, char*testo)
{
        int i, n, m, punteggio_max=0, punteggio, indice=-1;
        n=strlen(chiave);
        m=strlen(testo);
        for(i=0;i<m-n;i++)
        {
            punteggio=punteggio_matching(chiave, &testo[i], n);
            if(punteggio>punteggio_max)
            {
                punteggio_max=punteggio;
                indice=i;
            }
        }
        return indice;
}
int punteggio_matching(char*a, char*b, int n)
{
    int i, n_caratteri_uguali=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            n_caratteri_uguali++;
            
        }
    }
    return n_caratteri_uguali;
}
 
