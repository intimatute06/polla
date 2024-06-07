#include <stdio.h>
#include <string.h>
#include "inventario.h"

void listarProductos(char productos[][3][40], double precio[], int indice[]) {
    printf("Número\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[][3][40], double precio[]) {
    char marca[40];
    printf("Ingrese la marca a buscar: ");
    scanf("%s", marca);

    printf("Número\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][2], marca) == 0) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXCategoria(char productos[][3][40], double precio[]) {
    char categoria[40];
    printf("Ingrese la categoria a buscar: ");
    scanf("%s", categoria);

    printf("Número\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][1], categoria) == 0) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
    double precioLimite;
    printf("Ingrese el precio límite: ");
    scanf("%lf", &precioLimite);

    printf("Número\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (precio[i] < precioLimite) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void editarProducto(char productos[][3][40], double precio[], int indice[]) {
    int numProducto;
    printf("Ingrese el número del producto a editar: ");
    scanf("%d", &numProducto);
    numProducto--; // Para ajustarlo al índice del array

    if (numProducto >= 0 && numProducto < 10) {
        printf("Editar Nombre (actual: %s): ", productos[numProducto][0]);
        scanf("%s", productos[numProducto][0]);
        printf("Editar Categoria (actual: %s): ", productos[numProducto][1]);
        scanf("%s", productos[numProducto][1]);
        printf("Editar Marca (actual: %s): ", productos[numProducto][2]);
        scanf("%s", productos[numProducto][2]);
        printf("Editar Precio (actual: %.2f): ", precio[numProducto]);
        scanf("%lf", &precio[numProducto]);
        printf("Producto actualizado con éxito.\n");
    } else {
        printf("Número de producto no válido.\n");
    }
}
            printf("Estado: Aprobado\n\n");
        } else {
            printf("Estado: Reprobado\n\n");
        }
    }
}

void buscarAlumnoXApellido(char alumnos[][2][20], double notas[][3]) {
    char apellido[20];
    printf("\nIngrese el apellido del alumno a buscar: ");
    scanf("%s", apellido);
    int encontrado = 0;
    for(int i = 0; i < 6; i++) {
        if(strcmp(alumnos[i][1], apellido) == 0) {
            double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
            printf("\nNombre: %s %s\n", alumnos[i][0], alumnos[i][1]);
            printf("Notas: %.2lf %.2lf %.2lf\n", notas[i][0], notas[i][1], notas[i][2]);
            printf("Promedio: %.2lf\n", promedio);
            if(promedio >= 6.0) {
                printf("Estado: Aprobado\n\n");
            } else {
                printf("Estado: Reprobado\n\n");
            }
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("El alumno con apellido %s no fue encontrado.\n\n", apellido);
    }
}

void editarCalificaciones(char alumnos[][2][20], double notas[][3]) {
    char apellido[20];
    printf("\nIngrese el apellido del alumno para editar sus calificaciones: ");
    scanf("%s", apellido);
    int encontrado = 0;
    for(int i = 0; i < 6; i++) {
        if(strcmp(alumnos[i][1], apellido) == 0) {
            printf("\nIngrese las nuevas calificaciones del alumno %s %s: ", alumnos[i][0], alumnos[i][1]);
            scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);
            encontrado = 1;
            printf("Calificaciones actualizadas correctamente.\n\n");
            break;
        }
    }
    if (!encontrado) {
        printf("El alumno con apellido %s no fue encontrado.\n\n", apellido);
    }
}

