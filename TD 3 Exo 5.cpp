#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char chaine[100];
	int i = 0;

	printf("Entrer votre texte : ");
	gets_s(chaine);
	while (chaine[i] != '\0') {
		
		if (chaine[i] == ' ')
			chaine[i] = '.';
		i++;
	}
	printf("%s", chaine);
}

/* Réalisez un programme permettant de saisir une chaîne de caractères ayant
éventuellement des espaces puis de traiter cette chaîne sans espaces.
Vous afficherez cette chaîne sans espaces. */
