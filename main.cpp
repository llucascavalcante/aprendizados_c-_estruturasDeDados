#include <iostream>
#include "Listas/lista_duplamente_encadeada.hpp"
using namespace std;


int main() {

    
    /*
    Implementação Generica duplamente encadeada

    TListaDE<cartaPokemon> lista;
    cartaPokemon carta;

    inicializaLista(lista);
    montaCarta(carta, "Pikachu", 67);
    insereFim(lista, carta);
    montaCarta(carta, "Charmander", 45);
    insereFim(lista, carta);
    imprimirItens(lista);
    */

    /*
    Implementação duplamente encadeada
    */

    ListaDE lista;
 
    iniciaLista(lista);
    insereInicio(lista, "pikachu", 78);
    insereInicio(lista, "charmander", 54);
    insereInicio(lista, "reshiram", 100);
    insereInicio(lista, "pikachu2", 78);
    insereInicio(lista, "charmander2", 54);
    insereInicio(lista, "reshiram2", 100);
        imprimir(lista);

    cout << endl;

    inserePosicao(lista, "bortoleto", 450, 7);
    imprimir(lista);

    

    

    return 0;
}