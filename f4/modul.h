#ifndef MODUL_H
#define MODUL_H

/**
 * @brief Üdvözlőfüggvény
 * 
 * @param [in] neptun A csupa nagybetűs NEPTUN-kódodat tartalmazó sztring
 * @param [out] msg Egy karaktertömb kezdőcíme, melybe a függvény szöveges üzenetet ír.
 * 
 * @return sikerült-e beírni az üzenetet
 * 
 * @details Az msg tömböt neked kell lefoglalnod, max 30 karakter elegendő.
 */
bool greeting(char const *neptun, char msg[]);

#endif
