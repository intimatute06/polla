//Desarrollar un programa que permita realizar las siguientes acciones sobre un inventario
//1. Listar los Productos (Se debe listar los productos con las columnas: 
//                          Numero, Nombre, Categoria, Marca y Precio)
//2. Buscar Productos
//   1.Por Marca (Se debe ingresar la marca a buscar y se debe imprimir todos los productos con esa marca)
//   2.Por Categoria (Se debe ingresar la categoria a buscar y se debe imprimir todos los productos con esa categoria)
//   3.Por precio menor de: (Ingresar el precio limite, se debe imprimir todos los productos con precio menor al ingresado)
//3. Editar Producto (Se debe ingresar el numero del producto y depues editar los campos:
//                      Nombre, categoria, marca y precio)


#include <stdio.h>
#include "inventario.h"

int main (int argc, char *argv[]) {

    char productos[10][3][40]={{"Jordan","Zapatos","Nike"},
                               {"Classic","Camisas","Nike"},
                               {"Terrex","Zapatos","Adidas"},
                               {"Classic","Zapatos","Puma"},
                               {"Venture","Camisas","Nike"},
                               {"Superst","Zapatos","Adidas"},
                               {"Terrex","Chompas","Adidas"},
                               {"Classic","Chompas","Puma"},
                               {"Venture","Chompas","Adidas"},
                               {"Hoddie","Chompas","Puma"}};
    double precio[10] = {120,40,122,89,150,110,150,120,40,45};
    int indice[10] = {1,2,3,4,5,6,7,8,9,10};
    int opcion1,opcion2,opcion3;
    do{
        printf("Elija una opción:\n1.Listar Productos\n2.Buscar Productos\n3.Editar Productos\n>>");
        scanf("%d",&opcion1);
        switch (opcion1)
        {
        case 1:
            listarProductos(productos,precio,indice);
            break;
        case 2:
            printf("Buscar por:\n1.Marca\n2.Categoria\n3.Precio Menor de\n>>");
            scanf("%d",&opcion2);
            switch (opcion2)
            {
            case 1:
                buscarXMarca(productos,precio);
                break;
            case 2:
                buscarXCategoria(productos,precio);
                break;
            case 3:
                buscarXPrecioMenor(productos,precio);
                break;
            default:
                break;
            }
        case 3:
            editarProducto(productos,precio,indice);
        default:
            break;
        }
       printf("Desea elegir otra opción:\n1.Si\n2.No\n>>");
       scanf("%d",&opcion3); 
    }while(opcion3==1);

    return 0;
}