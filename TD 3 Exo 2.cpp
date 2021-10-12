#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    char s[50];
    char c;
	int p, m;
	m = 0;
    printf("Entrez une chaine de caractere:\n");
	gets_s(s);
    printf("Entrez un caractere: ");
    scanf("%c",&c);
	for (p = 0; p < 50; p++) {
		if (s[p] == c){	
			printf("%c", s[p]);
			m = m + 1;

		}

	}
	if (m == 0) printf("Le caractere n'existent pas.\n");
    return 0;
}

/*  Écrivez un programme qui cherche la première occurrence d'un caractère (donné par
l’utilisateur) dans une chaîne (donnée par l’utilisateur) en partant de la droite.
Ex : chaine entrée : « le langage C est un langage extraordinaire » et le caractère à
rechercher est le ‘a’
Le résultat attendu à l’écran est le suivant :
« Le caractère a se trouve à la position 4 à partir de la droite » */