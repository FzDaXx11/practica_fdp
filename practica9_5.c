#include <stdio.h>

int main(){
	int enteroNumAlumnos = 5;

	float realCalif = 0.0, realPromedio = 0.0;
	printf("\tPromedio de Calificaciones\n");
	for (int indice = 0 ; indice < enteroNumAlumnos ; indice++){
	scanf("%f", &realCalif);
	realPromedio += realCalif;
}
	printf("\nEl promedio de las calificaciones ingresadas es: %f\n", realPromedio/enteroNumAlumnos);

        return 0;
}
