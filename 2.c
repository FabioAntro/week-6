#include <stdio.h>
#include <string.h>

// Funzione per gestire le domande e risposte
void esegui_partita(char nome[]) {
    int punteggio = 0;
    int risposta;
    
    printf("\nCiao %s! Benvenuto al gioco delle domande!\n", nome);

    // Domanda 1
    printf("\nDomanda 1: Qual è il capoluogo della Puglia?\n");
    printf("1. Bari\n2. Napoli\n3. Monaco\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Errato! Monaco? Napoli? Ma dai!\n");
    }

    // Domanda 2
    printf("\nDomanda 2: Chi ha vinto l'ultima edizione della serie A'?\n");
    printf("1. Fc Internazionale\n2. Ssc Napoli\n3. Juventus Fc\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Errato! Meglio il tennis?\n");
    }

    // Domanda 3
    printf("\nDomanda 3: Chi è il presidente del Consiglio?\n");
    printf("1. Silvio Berlusconi\n2. Batman\n3. Giorgia Meloni\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Errato! Difficile, eh?\n");
    }

    printf("\nFine partita! Il tuo punteggio è: %d/3\n", punteggio);
}

int main() {
    char nome[50];
    char scelta;
    int esci = 0;

    printf("Benvenuto nel gioco delle domande e risposte!\n");
    printf("Scopo del gioco: Rispondi correttamente alle domande per ottenere il punteggio piu' alto.\n");

    while (!esci) {
        printf("\nMenu di scelta:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scegli un'opzione (A/B): ");
        scanf(" %c", &scelta);

        if (scelta == 'A' || scelta == 'a') {
            printf("\nInserisci il tuo nome: ");
            scanf("%s", nome);
            esegui_partita(nome);
        } else if (scelta == 'B' || scelta == 'b') {
            printf("Grazie per aver giocato! Arrivederci!\n");
            esci = 1;
        } else {
            printf("Scelta non valida. Riprova.\n");
        }
    }

    return 0;
}