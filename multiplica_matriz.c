#include <stdio.h>
#include <time.h>
#include<stdlib.h>



int main() {

int i, j, lA, cA, lB, cB, x;

printf("\n Informe a quntidade de linhas da matriz A : ");
scanf("%d",&lA);
printf("\n Informe a quantidade de colunas da matriz A : ");
scanf("%d",&cA);
printf("\n Informe a quntidade de linhas da matriz B : ");
scanf("%d",&lB);
printf("\n Informe a quantidade de colunas da matriz B : ");
scanf("%d",&cB);
srand(time(NULL));
int matrizA[lA][cA], matrizB[lB][cB], matrizC[lA][cB], aux = 0;

if(cA == lB) {

	for(i = 0; i < lA; i++) {
		for(j = 0; j < cA; j++) {
			
			matrizA[i][j] = rand() %100;
		}
		printf("\n");
	}

	for(i = 0; i < lB; i++) {        
		for(j = 0; j < cB; j++) {
			  matrizB[i][j] = rand() %100;
		}
		printf("\n");
	}

	
	printf("---------------------------- 1 - Matriz A---------------------------------\n\n");

	for(i = 0; i < lA; i++) {        
		for(j = 0; j < cA; j++) {
			printf(" %d", matrizA[i][j]);
		}
		printf("\n\n");
	}

	printf("---------------------------- 2 - Matriz B ---------------------------------\n\n");
	for(i = 0; i < lB; i++) {
		for(j = 0; j < cB; j++) {
			printf(" %d", matrizB[i][j]); 
		}
		printf("\n\n");
	}

	printf("---------------------------- 3 - Matriz C---------------------------------\n\n");

	
	for(i = 0; i < lA; i++) {
		for(j = 0; j < cB; j++) {
			
			matrizC[i][j] = 0;
			for(x = 0; x < lB; x++) {
				aux +=  matrizA[i][x] * matrizB[x][j];
			}

			matrizC[i][j] = aux;
			aux = 0;
		}
	}
	
	for(i = 0; i < lA; i++) {
		for(j = 0; j < cB; j++) {
			printf(" %d", matrizC[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
} else {
	printf("\n\n Nao ha com multiplicar as matrizes dadas ");
}

}
