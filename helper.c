//
// Created by Fran on 17/05/2024.
//

#include "helper.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
Nodo *newNodo(int codigo,char *nombre,int precio)
{
    Nodo *aux= malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
        {
            aux->codigo=codigo;
            strcpy(aux->nombre, nombre);
            aux->precio=precio;
            aux->sig=NULL;
            return aux;
        }
}
Lista *newLista()
{
    Lista *aux= malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
        {
            aux->cab=NULL;
            return aux;
        }
}

void agregarLista(Nodo *nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *aux=lista->cab;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAI;
        }
}
void imprimirLista(Lista *lista)
{
    Nodo *aux=lista->cab;
    while(aux!=NULL) {
        printf("Codigo del remedio: %d  precio: %d \n", aux->codigo, aux->precio);
        aux=aux->sig;
    }
}
void agregarCompra(Nodo *nodoAcomprar,Lista *lista)
{
    Nodo *nuevaCompra = newNodo(nodoAcomprar->codigo, nodoAcomprar->nombre, nodoAcomprar->precio);
    if(lista->cab==NULL)
    {
        lista->cab=nuevaCompra;
    }else
    {
        Nodo *aux=lista->cab;
        while(aux->sig!=NULL)
        {
            aux=aux->sig;
        }
        aux->sig=nuevaCompra;
    }
}
void imprimirTotal(Lista *lista) {
    Nodo *aux=lista->cab;
    int total=0;
    printf("Productos comprados:");
    while(aux!=NULL) {
        total=total+aux->precio;
        printf("CODIGO:%d y Precio: %d\n",aux->codigo,aux->precio);
        aux=aux->sig;
    }
    printf("TOTAL DE GASTO: %d\n", total);
}