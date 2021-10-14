#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char chaine[100];
	int i = 0, e, o;

	printf("Entrer votre texte : ");
	gets_s(chaine);
	e = strlen(chaine);
	while (chaine[i] != '\0') {
		
		if (chaine[i] == ' ')
			for (o = i; o < e; o++) 
				chaine[o] = chaine[o + 1]; // A partir de l'espace on va rajouter + 1 pour decaler et ainsi enlever l'espace
		i++;
	}
	printf("%s", chaine);
}

/* Réalisez un programme permettant de saisir une chaîne de caractères ayant
éventuellement des espaces puis de traiter cette chaîne sans espaces.
Vous afficherez cette chaîne sans espaces. */
