#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

int main() {
	const int TAB_SIZE = 10;
	int tNombres[TAB_SIZE];

	printf("Entrez les nombres du tableau\n");
	for (int i = 0; i < TAB_SIZE; i++) {
		printf("Nombre %d/10 : ", i + 1);
		scanf("%d", &tNombres[i]);
	}

	int nbMin = tNombres[0];
	for (int i = 1; i < TAB_SIZE; i++) {
		if (tNombres[i] < nbMin) nbMin = tNombres[i];
	}

	int nbMax = tNombres[0];
	for (int i = 1; i < TAB_SIZE; i++) {
		if (tNombres[i] > nbMax) nbMax = tNombres[i];
	}

	printf("\ntNombres : %d", tNombres[0]);
	for (int i = 1; i < TAB_SIZE; i++) printf(", %d", tNombres[i]);

	printf("\nLa valeur minimale est : %d", nbMin);
	printf("\nLa valeur maximale est : %d", nbMax);

	return 0;
}

/* Réaliser le programme en langage C permettant de lire 10 nombres entiers dans un
tableau avant d’en chercher le plus grand et le plus petit. */
