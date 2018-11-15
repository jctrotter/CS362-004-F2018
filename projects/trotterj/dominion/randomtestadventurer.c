#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1


int main () {
	srand(time(NULL));
	int randomDeckSize = rand() % 20;
	int cardPool;
	struct gameState state;
	int currentPlayer = whoseTurn(state);
	int cardDrawn;
	int z;
	int temphand[MAX_HAND];
	int cardArray[] = {"curse", "estate", "duchy", "province", "copper", "silver", "gold", "adventuerer", "council_room", "feast", "gardens", "mine", "remodel", "smithy", "village", "baron", "great_hall", "minion", "steward", "tribute", "ambassador", "cutpurse", "embargo", "outpost", "salvager", "sea_hag", "treasure_map"}
	for (int a; a<randomDeckSize; a++){
		cardPool = rand() % 27;
		gainCard(cardArray[cardPool], state, 0, currentPlayer)
	}
	int testCase = adventurerFunction(0, currentPlayer, state, cardDrawn, temphand, z);
	assert(testCase==0);
}

