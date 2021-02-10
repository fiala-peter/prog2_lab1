/**
 * L1 labor F4 feladat
 * - A libmodul.a könyvtárfájl és a modul.h fejlécfájl egy függvénykönyvtárat tartalmaznak.
 *   Ez a függvénykönyvtár jelenleg egyetlen függvényt tartalmaz, melynek prototípusát
 *   közli a fejlécfájl, és melynek lefordított bináris kódja van a könyvtárfájlban.
 *
 * - Írj C++ programot, mely meghívja a függvényt, és az eredményt kiírja a
 *   standard outputra. Ehhez a következőket kell tenned:
 * - A cpp fájlba include-old a könyvtár fejlécfájlját.
 * - Fordításkor a te programodat hozzá kell linkelned a könyvtárfájlhoz.
 *   Ezt mutatja be a tasks.json command parancsa
 *     g++ -g main.cpp -L-lmodul -o prog
 */

// itt include-old a modul fejlécfájlját (modul.h)
// mivel nem standard C headerről van szó, <> helyett "" jelölést használj
#include "modul.h"
#include <cstdio>

int main()
{
	// itt hívd meg a greeting függvényt, és az eredményt írd ki a standard outputra.
	char msg[200];
	greeting("OJY8UV", msg);
	printf("%s\n", msg);

	return 0;
}
