#include<stdio.h>
#include<stdlib.h>
typedef struct card
{
	char face[10];
	char suit[10];

}card;
int main(void)
{
	
	card acard{ {"Ace"},{"Spades"} };
	card* acardptr;
	acardptr = &acard;
	
	printf("%s %s\n%s %s \n%s %s ", acard.face, acard.suit,acardptr -> face,acardptr ->suit,(*acardptr).face,(*acardptr).suit );
	system("pause");
	return 0;
	

	

}
