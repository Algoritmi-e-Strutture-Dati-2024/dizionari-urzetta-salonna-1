
#include <iostream>
#include <string>
#include "DizionarioEsteso.cpp" // Assicurati che l'implementazione di DizionarioEsteso sia inclusa

int main() {

    //Creazione di un dizionario di tipo stringa
    DizionarioEsteso<std::string> dict;

    //Inserimento di coppie chiave-valore
    dict.inserisci("banana", "frutto");
    dict.inserisci("auto", "veicolo");
    dict.inserisci("libro", "oggetto");

    //Recupero dei valori con chiavi esistenti
    std::cout << "Valore di 'banana': " << dict.recupera("banana") << "\n";
    std::cout << "Valore di 'auto': " << dict.recupera("auto") << "\n";

    //Tentativo di recupero di un valore con una chiave che non esiste
    std::string value = dict.recupera("libro");
    if (value != "chiave non trovata!") {
        std::cout << "valore di 'libro': " << valore << "\n";
    } else {
        std::cout << "la chiave 'libro' non è stata trovata!\n";
    }

    //Verifica se una chiave appartiene al dizionario
    std::cout << "'banana' appartiene al dizionario? " << (dict.appartiene("banana") ? "si" : "No") << "\n";
    std::cout << "'libro' appartiene al dizionario? " << (dict.appartiene("libro") ? "si" : "No") << "\n";

    //Stampa il contenuto del dizionario
    dict.stampa();

    //Cancellazione di una chiave
    dict.cancella("auto");
    std::cout << "dopo aver cancellato "auto":\n";
    dict.stampa();

    return 0;
}
