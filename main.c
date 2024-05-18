
#include "helper.h"
int main()
{
    Nodo *remedioA=newNodo(1,"paracetamol",45);
    Nodo *remedioB=newNodo(2,"lebotiroxina",40);
    Nodo *remedioC=newNodo(3,"dipirona",50);
    Nodo *remedioD=newNodo(4,"ibuprofeno",60);
    Lista *lista=newLista();
    agregarLista(remedioA,lista);
    agregarLista(remedioB,lista);
    agregarLista(remedioC,lista);
    agregarLista(remedioD,lista);
    imprimirLista(lista);
    Lista *lista1=newLista();
    agregarCompra(remedioA,lista1);
    agregarCompra(remedioA,lista1);
    agregarCompra(remedioB,lista1);
    agregarCompra(remedioC,lista1);
    imprimirTotal(lista1);

    return 0;
}
