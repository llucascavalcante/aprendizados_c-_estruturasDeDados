#include <iostream>
using namespace std;


struct cartaPokemon{
    string nomeCarta;
    int raridade;
    cartaPokemon *proximo;
};

struct listaPokemon{
    cartaPokemon *inicio;
};

void iniciaLista(listaPokemon &lista){
    lista.inicio = NULL;
}

void insere_fim(listaPokemon &lista, string nomeCarta, int raridade){

    cartaPokemon *novo = new cartaPokemon;
    
    novo->nomeCarta = nomeCarta;
    novo->raridade = raridade;
    novo->proximo = NULL;

    if(lista.inicio == NULL){
        lista.inicio = novo;
        return;
    } 

    cartaPokemon *nav = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
    }
    nav->proximo = novo;
}

void imprimir(listaPokemon lista){
    if(lista.inicio == NULL){
        cout<<"Lista vazia";
        return;
    }

    cout<<"Cartas: "<<endl;

    cartaPokemon *nav = lista.inicio;
    while(nav != NULL){
        cout<<"Nome: "<<nav->nomeCarta<<endl;;
        cout<<"Raridade: "<<nav->raridade<<endl;
        cout<<"--------"<<endl;
        nav = nav->proximo;
    }
}

int main(){

    listaPokemon lista;

    iniciaLista(lista);
    insere_fim(lista, "Pikachu", 90);
    insere_fim(lista, "Charmander", 70);
    imprimir(lista);


    return 0;
}