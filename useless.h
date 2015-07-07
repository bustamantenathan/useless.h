#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int th(void) {
	//this function flips a coin in a loop until it gets three heads in a row
	srand(time(NULL));
	float coin;
	int headTimes;
	int amount;
	for (headTimes = 0; headTimes < 3;) {
		coin = rand() % (1 + 1);
		if (coin < .5) {
			printf("Heads ");
			headTimes++;
		} else {
			printf("Tails ");
			headTimes = 0;
		}
	}
}

int ht() {
	//this function flips a coin for you
	srand(time(NULL));
	int coin = rand() % (1 + 1);
	if (coin < .5) {
		printf("Heads\n");
	} else {
		printf("Tails\n");
	}
}