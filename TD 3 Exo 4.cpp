#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char chaine[100];
	int i = 0;

	printf("Entrer votre texte : ");
	scanf("%s", &chaine[i]);
	while (chaine[i] != '\0' ) { // a partir de cette boucle chaque caractère en majuscule sera remplacer par la lettre demander comme par exemple A deviendra a
		if (chaine[i] == 'A')
			chaine[i] = 'a';

		if (chaine[i] == 'B')
			chaine[i] = 'b';

		if (chaine[i] == 'C')
			chaine[i] = 'c';

		if (chaine[i] == 'D')
			chaine[i] = 'd';

		if (chaine[i] == 'E')
			chaine[i] = 'e';

		if (chaine[i] == 'F')
			chaine[i] = 'f';

		if (chaine[i] == 'G')
			chaine[i] = 'g';

		if (chaine[i] == 'H')
			chaine[i] = 'h';

		if (chaine[i] == 'I')
			chaine[i] = 'i';

		if (chaine[i] == 'J')
			chaine[i] = 'j';

		if (chaine[i] == 'K')
			chaine[i] = 'k';

		if (chaine[i] == 'L')
			chaine[i] = 'l';

		if (chaine[i] == 'M')
			chaine[i] = 'm';

		if (chaine[i] == 'N')
			chaine[i] = 'n';

		if (chaine[i] == 'O')
			chaine[i] = 'o';

		if (chaine[i] == 'P')
			chaine[i] = 'p';

		if (chaine[i] == 'Q')
			chaine[i] = 'q';

		if (chaine[i] == 'R')
			chaine[i] = 'r';

		if (chaine[i] == 'S')
			chaine[i] = 's';

		if (chaine[i] == 'T')
			chaine[i] = 't';

		if (chaine[i] == 'U')
			chaine[i] = 'u';

		if (chaine[i] == 'V')
			chaine[i] = 'v';

		if (chaine[i] == 'W')
			chaine[i] = 'w';

		if (chaine[i] == 'Y')
			chaine[i] = 'y';

		if (chaine[i] == 'Z')
			chaine[i] = 'z';
		i++;
	}
	printf("%s", chaine);
}

/* Écrivez un programme en C qui saisit une chaîne donné par l’utilisateur et qui
convertit les éventuelles majuscules en minuscules */
