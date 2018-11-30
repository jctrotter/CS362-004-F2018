#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
/*tests adventurerFunction*/
int main(){
	struct gameState state;
	int drawnTreasure = 0;
	int currentPlayer = whoseTurn(state);
	int cardDrawn;
	int temphand[MAX_HAND];
	int temphandCounter = 0;
	int adventurerStatus = adventurerFunction(drawnTreasure, currentPlayer, &state, cardDrawn, temphand, z);
	assert(adventurerStatus == 0);
}
