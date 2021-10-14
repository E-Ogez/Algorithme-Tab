#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	float t[3][4], total;
	int i, z;
	
	for (i = 0; i < 3; i++) {
		for (z = 0; z < 4; z++) {
			scanf("%f", &t[i][z]);
			printf("%f\n", t[i][z]);
		}
	}
	total = t[0][0] + t[0][1] + t[0][2] + t[1][0] + t[1][1] + t[1][2] + t[2][0] + t[2][1] + t[2][2] + t[0][3] + t[1][3] + t[2][3];

	printf("%f", total);
}

/*Soit le tableau t déclaré ainsi
float t[3][4] ;
Ecrire le programme permettant de calculer, dans une variable nommée somme, la
somme des éléments de t.*/
