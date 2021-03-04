#include <stdio.h>
#include <string.h>
int main ()
{
	int round, i, j;
	char order[50];
	scanf("%d", &round);
	
	int ball[round];
	for(i=0; i<=round; i++)
		ball[i] = 1;
	for(j=0; j<round; j++)
	{
		scanf(" %s", order);
		for(i=0; i<strlen(order); i++)
		{
			if(order[i] == 'A')
			{
				switch(ball[j])
				{
					case '2': ball[j] = 3; break;
					case '3': ball[j] = 2; break;
					default: ball[j] = ball[j]; break;
				}
				printf("Ball's current position is %d\n", ball[j]);
			}
			if(order[i] == 'B')
			{
				switch(ball[j])
				{
					case '1': ball[j] = 4; break;
					case '4': ball[j] = 1; break;
					default: ball[j] = ball[j]; break;
				}
				printf("Ball's current position is %d\n", ball[j]);
			}
			if(order[i] == 'C')
			{
				switch(ball[j])
				{
					case '1': ball[j] = 3; break;
					case '2': ball[j] = 4; break;
					case '3': ball[j] = 1; break;
					case '4': ball[j] = 2; break;
					default: ball[j] = ball[j]; break;
				}
				printf("Ball's current position is %d\n", ball[j]);
			}
			if(order[i] == 'D')
			{
				switch(ball[j])
				{
					case '1': ball[j] = 2; break;
					case '2': ball[j] = 1; break;
					case '3': ball[j] = 4; break;
					case '4': ball[j] = 3; break;
					default: ball[j] = ball[j]; break;
				}
				printf("Ball's current position is %d\n", ball[j]);
			}
			if(order[i] == 'E')
			{
				switch(ball[j])
				{
					case '1': ball[j] = 4; break;
					case '2': ball[j] = 3; break;
					case '3': ball[j] = 2; break;
					case '4': ball[j] = 1; break;
					default: ball[j] = ball[j]; break;
				}
				printf("Ball's current position is %d\n", ball[j]);
			}
		}
	}
	
	for(i=0; i<round; i++)
		printf("%d\n", ball[i]);
	return 0;
}
