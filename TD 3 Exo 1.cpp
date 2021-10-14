#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char str[100], rev[100];
	int t, i, j;

	printf(" Entrez une chaine de caractere :  ");
	gets_s(str);

	j = 0;
	t = strlen(str);

	for (i = t - 1; i >= 0; i--) //ça reprend le texte sur le premier tableau pour le transferer sur le deuzième avec le texte inversée.
	{
		rev[j++] = str[i];
	}
	rev[t] = '\0';

	printf(" Chaine de caractere apres inversion : %s", rev);

	return 0;
}

/* Ecrire un programme qui saisit une chaîne de caractères au clavier et qui l’affiche
dans l’ordre inverse */
