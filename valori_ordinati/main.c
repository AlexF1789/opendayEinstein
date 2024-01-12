/* Terzo programma in C

Questo terzo programma ordina una sequenza di indefinita lunghezza di valori dati in ordine crescente
utilizzando l'algoritmo di ordinamento Selection Sort

Viene scelto come linguaggio il C che è decisamente più complesso del finora visto Python ma che incarna
meglio il percorso piramidale svolto nei cinque anni di liceo in cui si avrà la crescita della propria capacità
di elaborare soluzioni per i problemi posti arrivando a ragionare in una maniera che si avvicina di più
a quella del computer

*/

#include <stdio.h>
#include <stdbool.h>

// definiamo per dopo una funzione che ci servirà per stampare il vettore (array)
void stampa_lista(int lista[],int lunghezza);

int main() {

    // definiamo il numero di elementi della lista
    int numValori;
    bool erroreInserimento = false;

    do {
        if(erroreInserimento)
            printf("Attenzione! Verifica il dato inserito!\n\n");
        printf("Inserisci il numero di valori: ");
        scanf("%d",&numValori);
        erroreInserimento = true;
    } while(numValori<=0);

    // inizializziamo la lista e i suoi valori

    int lista[numValori];
    for(int i=0;i<numValori;i++) {
        printf("Inserisci il %d elemento: ",i+1);
        scanf("%d",&lista[i]);
    }

    // stampiamo la lista, la ordiniamo con Selection Sort e la ristampiamo
    printf("\nLista non ordinata");
    stampa_lista(lista,numValori);

    int temp;
    for(int i=0;i<numValori;i++)
        for(int j=i+1;j<numValori;j++)
            if(lista[j]<lista[i]) { // si noti che per ordinare in ordine decrescente basta variare a questa riga il segno della disequazione
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }

    printf("Lista ordinata");
    stampa_lista(lista,numValori);

    return 0;
}

// definiamo la funzione stampa_lista che dato un vettore e la sua dimensione ne stampa i suoi elementi
// con una sintassi simil-Pythoniana
void stampa_lista(int lista[],int lunghezza) {
    printf("\n[ ");
    for(int i=0;i<lunghezza;i++)
        printf("%d ",lista[i]);
    printf("]\n\n");
}