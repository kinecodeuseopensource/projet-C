#include<stdio.h>
# include "menu.h"
char tab_codage =["1-décimal en binaire\n","2-octal en binaire\n","3-hexadcimal en binaire\n","4-retour\n","5-quitter"];
void menu_codage(char tab_codage );
void menu_codage(cha tab_codage ):int{
    int choix;
    for (int i = 0; i < 6; i++)
    {
        printf("%s",tab_codage[i]);
    }
    printf("Veuillez choisir une option : ");
    scanf("%d", &choix);
    return choix;
}
