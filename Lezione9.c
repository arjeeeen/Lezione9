#include <stdio.h>

/*/
 *   Van Zwam Arjen
 */

void SceltaGioco();
int partitaInAtto();


int main()
{
    char scelta = {'\0'};
    SceltaGioco();
    scanf("%c", scelta);
    if (scelta == 'B')
    {
        printf("E' stato bello vederti qui, ciao.\n");
        return 0;
    }
    while (scelta == 'A')
    {
        partitaInAtto();
        SceltaGioco();
        scanf("%c", scelta);
    }

    return 0;
}

void SceltaGioco()
{
    printf("Ciao! Oggi faremo 3 domande, in base alle risposte riceverai un punteggio!\n");
    printf("Premi A per fare il gioco, B per uscire dal gioco!  \n");
}
int partitaInAtto()
{
    int punteggio = 0;
    char inputNome[28] = {'\0'};
    char risposta1;
    char risposta2;
    char risposta3;
    printf("Per iniziare inserisci il tuo Nome: %d\n");
    scanf("%s", &inputNome);

    printf("DOMANDONA NUMERO 1:\n");
    printf("Scegli la corretta capitale dell'Italia:\n");
    printf("A = Roma, B = Napoli, C = Verona\n");
    scanf("%c", risposta1);

    if (risposta1 == 'A')
    {
        punteggio++;
        printf("BRAVO! Hai risposto correttamente, andiamo avanti.. \n");
        printf("DOMANDONA NUMERO 2:\n");
        printf("Scegli la corretta capitale della Francia:\n");
        printf("A = Vicenza, B = Praga, C = Parigi\n");
        scanf("%c", risposta2);

        if (risposta2 == 'C')
        {
            punteggio++;
            printf("BRAVO! Hai risposto correttamente, andiamo avanti.. \n");
            printf("DOMANDONA NUMERO 3:\n");
            printf("Scegli la corretta capitale della Costa d'Avorio:\n");
            printf("A = Belize, B = Yamoussoukro, C = Myanmar\n");
            scanf("%c", risposta3);

            if (risposta3 == 'B'){
                printf("BRAVO %s! Hai risposto correttamente a tutto, il tuo punteggio è: %d", inputNome, punteggio);
            }
        }
    }

    else
        printf("Mi spiace hai sbagliato, studia e ricomincia!!\n");
    return 0;
}