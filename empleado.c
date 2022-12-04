#include <stdio.h>
//NOMBRE, EDAD, PUESTO y SALARIO
struct empleado {
    char nombre [50];
    int edad;
    char puesto [50];
    float salario;
};
void main ()
{
struct empleado e1;

printf("Introduce el nombre del empleado \n");
        fgets(e1.nombre,50,stdin);
        printf("Introduce la edad \n");
        // fgets(l1.isbn,50,stdin);
        scanf("%d",&e1.edad);//fgets
         
         printf("Introduce el puesto de empleado \n");
        // fgets(e1.puesto,50,stdin);
        scanf("%s",&e1.puesto);//fgets
        printf("Introduce el salario del empleado\n");
        scanf("%f",&e1.salario);//fgets
        printf("El nombre del empleado %s\n", e1.nombre);
        printf("la edad del empleado es %d\n",e1.edad);
        printf("el puesto de empleado %s \n",e1.puesto);
        printf("el salario de empleado %f \n", e1.salario);
}