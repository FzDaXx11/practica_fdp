#include <stdio.h>

int main(){
	char op = 'n';
	double sum = 0, calif = 0;

	int veces = 0;

	do {
		printf("\tSuma de calificaciones\n");
		printf("Ingrese la calilficación\n");
		scanf("%lf", &calif);
		veces++;
		sum = sum + calif;

		printf("¿Desea sumar otra? S/N\n");
		setbuf(stdin, NULL);
		scanf("%c",&op);
		getchar();
	} while (op =='S' || op == 'S');

	printf("El promedio de las calificaciones ingresadas es: %lf\n", sum/veces);

	return 0;
}
