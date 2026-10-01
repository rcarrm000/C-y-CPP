#include <iostream>
#include "funciones.hpp"
using namespace std;

int main(){
    
    Nodo* l = (Nodo*)calloc(1, 1*sizeof(Nodo));
    Nodo* k = (Nodo*)calloc(1, 1*sizeof(Nodo));
    Nodo* j = (Nodo*)calloc(1, 1*sizeof(Nodo));
    Nodo* h = (Nodo*)calloc(1, 1*sizeof(Nodo));

    l->siguiente = k;
    l->valor = 12;
    k->siguiente = j;
    k->valor = 98;
    j->siguiente = h;
    j->valor = 56;
    h->siguiente = NULL;
    h->valor = 73;
    h->anterior = j;
    j->anterior = k;
    k->anterior = l;
    l->anterior = NULL;

    Nodo* temp = (Nodo*)calloc(1, sizeof(Nodo));

    while(h->anterior != NULL){
        temp->siguiente = h;
        temp->valor = h->valor;
        h = h->anterior;
        cout<<"el valor del nuevo h es: "<<h->valor<<endl;
    }

    if(h->anterior == NULL){
        h = temp;
        cout<<"h es: "<<h->valor<<endl;
    }

    cout<<"el valor de h es: "<<h->valor<<endl;
    cout<<"el valor de j es: "<<j->valor<<endl;
    cout<<"el valor de k es: "<<k->valor<<endl;
    cout<<"el valor de l es: "<<l->valor<<endl;

    return 0;
}