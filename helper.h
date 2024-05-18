//
// Created by Fran on 17/05/2024.
//

#ifndef GUIA2_EJ3_HELPER_H
#define GUIA2_EJ3_HELPER_H
typedef struct nodo
{
    int codigo;
    char nombre[50];
    int precio;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int codigo,char *nombre,int precio);
Lista *newLista();
void agregarLista(Nodo *newNodo,Lista *lista);
void imprimirLista(Lista *lista);
void agregarCompra(Nodo *nodoAcomprar,Lista *lista);
void imprimirTotal(Lista *lista);
#endif //GUIA2_EJ3_HELPER_H
