#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	//taking into account whether the last 50/50 was won
	if (strcmp(argv[1], "won") == 0)
	{
	int primo = atoi(argv[2]);
	int wishes = primo / 160;
	int pages = atoi(argv[3]);
	int remains = atoi(argv[4]);
	int pity =(90 - (pages * 5) + remains) * 160;

	printf("you need %i to garentee\n", (90 - wishes) * 160 + pity );
	}
	else if (strcmp(argv[1], "lost") == 0)
	{
	int primo = atoi(argv[2]);
	int wishes = primo / 160;
	int pages = atoi(argv[3]);
	int remains = atoi(argv[4]);
	int pity =(90 - (pages * 5) + remains) * 160;

	printf("you need %i to garentee\n", (90 - wishes) * 160 + pity);
	}
	else if (strcmp(argv[1], "help"))
	{
	printf("enter ./hoyowish won #OfPrimos #OfPagesToLast5Star #OfRemaining\n");
	}
}
