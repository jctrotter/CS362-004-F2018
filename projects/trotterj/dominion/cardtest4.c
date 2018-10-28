#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
/*tests outpostFunction()*/
int main(){
	struct gameState state;
	int currentPlayer = whoseTurn(state);
	int handPos = 2;
	int outpostStatus = outpostFunction(currentPlayer, state, handPos);
	assert(outpostStatus == 0);

	
}