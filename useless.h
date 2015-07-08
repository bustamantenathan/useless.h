#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int threeh(void) {
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

int flip() {
	//this function flips a coin for you
	srand(time(NULL));
	int coin = rand() % (1 + 1);
	if (coin < .5) {
		printf("Heads\n");
	} else {
		printf("Tails\n");
	}
}

int hw() {
	printf("Hello World\n");
}

int fizzbuzz(void) {
	int number;
	printf("A number please: \n");
	if (scanf("%d", &number)) {
	int total = number;
	int i;
	for (i = 1; i < total; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("Fizzbuzz ");
		} else if (i % 3 == 0) {
			printf("Fizz ");
		} else if (i % 5 == 0){
			printf("Buzz ");
		} else {
			printf("%d ", i);
		}
	}
	printf("\n");
} else {
			printf("The fizzbuzz function takes an input of an interger\n");
		return 1;
}
}