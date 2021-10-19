#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int chaine[100];
	int i=0, j, c;
	srand(time(NULL));
	
	while (i < 100) {
		chaine[i] = rand() % 101;
		i++;
	}
	printf("| Nombre Aleatoire |\n");
	printf("\n");
	for (j = 0; j < 100; j++)printf("%d ", chaine[j]);
	printf("\n");
	for (j = 1; j <= 100; j++) {
		for (i = 0; i < 100 - 1; i++) {
			if (chaine[i] > chaine[i + 1]) {
				c = chaine[i];
				chaine[i] = chaine[i + 1];
				chaine[i + 1] = c;
			}
		}
	}
	printf("\n");
	printf("| Nombre Trier |\n");
	printf("\n");
	for (j = 0; j < 100; j++)printf("%d ", chaine[j]);
	printf("\n");
	
}


/* Par groupe de deux vous ferez une recherche sur les différentes méthodes de tri qui
existent.
Dans la séance vous me proposez une méthode de tri que je validerai. Puis à la fin
de la séance suivante vous me remettez le code source (avec les en-têtes et
commentaires obligatoire) du travail demandé ci-après :
Vous devrez créer une application qui utilise la méthode sélectionnée afin de trier un
tableau qui a été initialisé aléatoirement au début de l’application (random() à
étudier).
Vous devrez afficher le tableau, puis le trier et l’afficher de nouveau. */
