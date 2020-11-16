//
//  main.c
//  calcolo_occorrenze_stringhe
//
//  Created by Vincenzo on 11/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    char testo[80];
    char carattere;
    int occorrenze;
    occorrenze = 0;
    int i;
       
    /* leggi stringa */
    printf("Inserisci una stringa:\n");
    scanf("%s", testo);
    getchar();
    /* legge il carattere */
    printf("Inserisci un carattere:\n");
    scanf("%c", &carattere);

    
    /* legge tutti i caratteri della stringa. Se il carattere i-esimo
       corrisponde al carattere letto allora la variabile 'occorrenze'
       viene incrementata di uno */
    for (i = 0; testo[i] != '\0'; i++) {
     if (testo[i] == carattere)
         occorrenze++;
    }

    printf("Il numero di occorrenze del carattere %c nella stringa e' %d\n", carattere, occorrenze);

    return 0;
}
