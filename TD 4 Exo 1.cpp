#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int table[40];
	int i, d = 0, j, tmp;
	
	printf("test :");
	scanf("%d", &table[d]);
	while (table[d] != -1 )     
	{
		d++;
		printf("test :");
		scanf("%d", &table[d]);
	}
	for (i = 0; i < d; ++i)
	{
		printf("%4d", table[i]);
	}
	for (i = 0; i < d - 1; i++)
	{
		for (j = 0; j < d - i - 1; j++)
		{
			if (table[j] > table[j + 1])
			{
				tmp = table[j];
				table[j] = table[j + 1];
				table[j + 1] = tmp;
			}
		}
	}
	printf("\n| Tableau triee par ordre croissant |\n");

	for (i = 0; i < d ; ++i)
	{
		printf("%4d", table[i]);
	}

	return 0;
}

/* Soit un tableau tab, de 40 entiers au plus, initialisé par l’utilisateur qui arrêtera la
saisie en tapant –1, vous créerez un programme en langage C qui permette, après
l’initialisation et l’affichage, de trier ce tableau en ordre croissant (méthode du tri à
bulle ou par sélection au choix) et de l’afficher à nouveau.
Contrainte : Vous n’utiliserez qu’un seul tableau (tab).  */
