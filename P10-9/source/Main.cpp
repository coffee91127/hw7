#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct card
{
	const char* face;
	const char* suit;
}card;
void filldeck(card*  wdeck, const char * wface[], const char * wsuit[]);
void suffle(card*  wdeck);
void deal(card*  wdeck);
int main(void)
{
	card deck[52] ;
	const char* face[] = { "Ace","Duce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
	const char* suit[] = {"Heart","Diamonds","Clubs","Spades"};
	srand(time(NULL));
	filldeck(deck, face, suit);
	suffle(deck);
	deal(deck);

	system("pause");
	return 0;
}
void filldeck(card*  wdeck, const char * wface[], const char * wsuit[])
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		wdeck[i].face = wface[i % 13];
		wdeck[i].suit = wsuit[i / 13];
	}
}
void suffle(card*  wdeck)
{
	int i, j;
	card temp;
	for (i = 0; i <= 51; i++)
	{
		j = rand() % 52;
		temp = wdeck[i];
		wdeck[i] = wdeck[j];
		wdeck[j] = temp;
	}
}
void deal( card* wdeck)
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		printf("%5s of %-8s",wdeck[i].face,wdeck[i].suit);
		if ((i + 1) % 4 == 0)
		{
			printf("\n");
		}
		else
		{
			printf("\t");
		}

	}
}
