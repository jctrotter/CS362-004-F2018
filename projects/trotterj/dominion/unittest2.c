#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
/*tests function intializeGame()*/

int main(){
	int tempGame;
	int k[10] = {adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};
	struct gameState G;
	memset(&G, 'z', sizeof(struct gameState));
	tempGame = intializeGame(4,k,1,&G);
	assert(tempGame == 0);
	
}