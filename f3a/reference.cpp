/**
 * L1 labor F3/A feladat
 * 
 * A program lépésenkénti végrehajtásával és a változók
 * követésével elemezd a referencia típus viselkedését
 */

#include <cstdio>
#include <cstdlib>
// C++ -ban stdio.h helyett cstdio, math.h helyett cmath stb...
// Ezen a módon a C könyvtár összes funkciója elérhető.

/**
 * @brief felcseréli a paraméterként kapott két változót
 * 
 * @param a első változó címe
 * @param b második változó címe
 */
void swapUsingPointers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * @brief felcseréli a paraméterként kapott két változót
 * 
 * @param a első változó referenciája
 * @param b második változó referenciája
 */
void swapUsingReferences(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

/**
 * @brief visszaadja lokális változó referenciáját
 * 
 * @warning lokális változó referenciáját visszaadni TILOS!
 * A lokális változó a függvényből kilépéskor megszűnik, minden
 * rá való hivatkozás (pointer, referencia) érvénytelen
 */
int &getLocalVariable()
{ 
	int a = 10;
	return a;
}

// C++-ban a függvényfejlécekben nem kell jelölni a void-ot
// int main() és int main(void) ugyanazt jelenti
int main()
{
	// 1. példa
	printf("1. pelda\n");
	int x = 1;
	int &y = x;		// x és y ugyanazon objektum két megnevezése
	printf("\tx=%d; y=%d\n", x, y);
	x = 2;
	printf("\tx=%d; y=%d\n", x, y);
	y = 5;
	printf("\tx=%d; y=%d\n", x, y);

	// 2. példa
	printf("2. pelda\n");
	int k = 100;	// k, l, m, n ugyanarra az objektumra hivatkozik
	int &l = k;
	int &m = l;
	int &n = m;
	m = 200;
	printf("\tk=%d; l=%d; m=%d; n=%d\n", k, l, m, n);

	// 3. példa
	printf("3. pelda\n");
	int u = 10, v = 20;
	printf("\tu=%d; v=%d\n", u, v);
	swapUsingPointers(&u, &v);
	printf("\tu=%d; v=%d\n", u, v);

	// 4. példa
	printf("4. pelda\n");
	int i = 40, j = 50;
	printf("\ti=%d; j=%d\n", i, j);
	swapUsingReferences(i, j);
	printf("\ti=%d; j=%d\n", i, j);

	// 5. példa
	// Ez a példa definiálatlan működést mutat be.
	// Bizonyos fordítókkal (vc) lefut és hülyeséget csinál, más fordítókkal (gcc) összeomlik.
	printf("5. pelda\n");
	int& localref = getLocalVariable();
	printf("\tlocalref=%d\n", localref);
	localref = 44;
	printf("\tlocalref=%d\n", localref);
	printf("\tlocalref=%d\n", localref);
	printf("\tlocalref=%d\n", localref);

	// 6. példa
	printf("6. pelda\n");
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 700;
	int &dinref = *ptr;	// dinamikus változó referenciája is képezhető
						// dinref és *ptr ugyanazt az objektumot jelöli
	printf("\t*ptr=%d; dinref=%d\n", *ptr, dinref);
	free(ptr); // dinamikusan foglalt területet fel kell szabadítani

	// dinref innentől érvénytelen referencia, ptr érvénytelen pointer

	return 0;
}
