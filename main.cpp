#include <iostream>
#include "lista_generica_encadeada.hpp"
#include "TAD_POKEMON.hpp"
using namespace std;


int main() {

    ListaE<cartaPokemon> lista;
    cartaPokemon carta;

    iniciaLista(lista);
    montaCarta(carta, "Pikachu", 78);
    insereFim(lista, carta);
    montaCarta(carta, "Charisard", 56);
    insereFim(lista, carta);
    imprimirItens(lista);

    return 0;
}