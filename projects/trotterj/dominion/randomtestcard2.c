#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
#include <time.h>
#include <stdlib.h>
/*tests villageFunction()*/
int main(){
	srand(time(NULL))
	struct gameState state;
	int currentPlayer = whoseTurn(state);
	int handPos = rand() % MAX_HAND;
	int villageStatus = villageFunction(currentPlayer, state, handPos);
	assert(villageStatus == 0);
}