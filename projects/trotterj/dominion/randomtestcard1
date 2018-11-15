#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <time.h>
#include <stdlib.h>

#define DEBUG 0
#define NOISY_TEST 1
/*tests smithyFunction()*/
int main(){
	srand(time(NULL));
	struct gameState state;
	int currentPlayer = whoseTurn(state);
	int handPos = rand() % MAX_HAND;
	int smithyStatus = smithyFunction(currentPlayer, state, handPos);
	assert(smithyStatus == 0);
	
}