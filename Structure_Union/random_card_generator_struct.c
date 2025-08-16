#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Suit{
	HEARTS,
	DIAMONDS,
	CLUBS,
	SPADES
};

struct Card {
	enum Suit suit;
	int rank;
};

struct Card generate(){
	struct Card card;
	card.suit = rand() % 4;
	card.rank = (rand() % 13) + 1;
	return card;
}

void printCard(struct Card card){
	if(card.rank == 1)
		printf("Ace");
	else if(card.rank == 11)
		printf("Jack");
	else if(card.rank == 12)
		printf("Queen");
	else if(card.rank == 13)
		printf("King");
	else
		printf("%d", card.rank);

	printf(" of ");
	switch(card.suit){
		case HEARTS: 
			printf("Hearts"); 
			break;
		case DIAMONDS:
			printf("Diamonds");
			break;
		case SPADES:
			printf("Spades");
			break;
		case CLUBS:
			printf("Clubs");
			break;
	}
	printf("\n");
}

int main(void){
	srand(time(NULL));
	struct Card card = generate();	
	printCard(card);
	return 0;
}



