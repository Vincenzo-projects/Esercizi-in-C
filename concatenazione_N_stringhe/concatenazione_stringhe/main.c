//
//  main.c
//  concatenazione_stringhe
//
//  Created by Vincenzo on 12/11/2020.
//  Copyright © 2020 Vincenzo. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void cat_stringa(char s[],char t[]);
int main ()
{
   char s[50], t[50];

   strcpy(s,  "This is source");
   strcpy(t, "This is destination");

   strncat(s,t,19);

   printf("Final destination string : %s\n", s);
   
   return(0);
}

void cat_stringa(char s[],char t[])
{
    int i,j;
    j=strlen(s);
    for (i=0;t[i] != '\0'; i++)
        s[j++]=t[i];
        s[j]='\0';
}
