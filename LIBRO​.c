#include <stdio.h>
struct libro {
    char titulo [50];
    char autor [50];
    int isbn;
    char editorial [50];
    int year;
    int publicacion;
};
void main ()
{
struct libro l1;
// printf("Introduce los datos del libro \n");
        printf("Introduce el titulo del libro \n");
        fgets(l1.titulo,50,stdin);//fgets para cargar strings
        // char autor [50];
        printf("Introduce el nombre del autor \n");
        fgets(l1.autor,50,stdin);
        printf("Introduce el nombre del ISBN \n");
        // fgets(l1.isbn,50,stdin);
        scanf("%d",&l1.isbn);//fgets
        // printf("la isbn de l1: %d \n", l1.isbn);
        // l1.isbn==10;
        printf("Introduce el año del libro\n");
        scanf("%i",&l1.year);//fgetss
        printf("introduce lapublicacio \n");
        scanf("%d",&l1.publicacion);
        printf("los valores de los nombre son; \n");
        printf("la titulo de l1: %s \n", l1.titulo);
        printf("la autor de l1: %s \n", l1.autor);
        printf("la isbn de l1: %d \n", l1.isbn);
        printf("la año de l1: %i \n", l1.year);
        printf("la publicacion de l1: %i \n", l1.publicacion);
}
