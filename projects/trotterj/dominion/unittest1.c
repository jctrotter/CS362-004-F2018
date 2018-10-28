#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
/*tests the function kingdomCards()*/
int main()
{
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	int v5 = 5;
	int v6 = 6;
	int v7 = 7;
	int v8 = 8;
	int v9 = 9;
	int v10 = 10;
	int* kingdomCardArray = kingdomCards(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
	assert(kingdomCardArray);
	int x;
	for (x = 0, x < 10, x++)
	{
		printf("%i ", kingdomCardArray[x]);
	}
}