#include<stdio.h>

void main (int argc, char *argv[])
{
	//taking into account whether the last 50/50 was won
	if (strcmp(argv[1] == "won"))
	{
	int primo = atoi(argv[2]);
	int wishes = primo / 160;

	printf("you need %i to garentee\n", (90 - wishes) * 160 + (90 * 160) )
	}
	else if (strcmp(argv[1] == "lost"))
	{
	int primo = atoiargv[2];
	int wishes = primo / 160;

	printf("you need %i to garentee\n", (90 - wishes) * 160)
	}
}
