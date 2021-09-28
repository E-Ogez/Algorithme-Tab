#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char str[100], rev[100];
	int t, i, j;

	printf(" Entrez une chaine de caractere :  ");
	fgets(str, 25, stdin);

	j = 0;
	t = strlen(str)-1;
	str[t] = '\0';

	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = str[i];
	}
	rev[t] = '\0';

	printf(" Chaine de caractere apres inversion : %s", rev);

	return 0;
}

/* Ecrire un programme qui saisit une chaîne de caractères au clavier et qui l’affiche
dans l’ordre inverse */
