#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char chaine[100];
	int i = 0;
	int tab[27] = {};
	printf("Entrer votre texte : ");
	gets_s(chaine);
	while (chaine[i] != '\0') {
		switch (chaine[i]) 
		{

		case 'a': tab[0]++;
			break;

		case 'b': tab[1]++;
			break;

		case 'c': tab[2]++;
			break;

		case 'd': tab[3]++;
			break;

		case 'e': tab[4]++;
			break;

		case 'f': tab[5]++;
			break;

		case 'g': tab[6]++;
			break;

		case 'h': tab[7]++;
			break;

		case 'i': tab[8]++;
			break;

		case 'j': tab[9]++;
			break;

		case 'k': tab[10]++;
			break;

		case 'l': tab[11]++;
			break;

		case 'm': tab[12]++;
			break;

		case 'n': tab[13]++;
			break;

		case 'o': tab[14]++;
			break;

		case 'p': tab[15]++;
			break;

		case 'q': tab[16]++;
			break;

		case 'r': tab[17]++;
			break;

		case 's': tab[18]++;
			break;

		case 't': tab[19]++;
			break;

		case 'u': tab[20]++;
			break;

		case 'v': tab[21]++;
			break;

		case 'w': tab[22]++;
			break;

		case 'x': tab[23]++;
			break;

		case 'y': tab[24]++;
			break;

		case 'z': tab[25]++;
			break;

		case ' ': tab[26]++;
			break;

		}
		i++;
	}

	for (i = 0; i < 27; i++) printf("%d", tab[i]);
}




/* Ecrire un programme qui saisit une chaîne de caractères au clavier et qui compte le
nombre de fois que chacune des lettres de l’alphabet et le nombre d’espaces ont été
présents dans la phrase*/