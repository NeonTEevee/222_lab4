#include <stdio.h>
#include <string.h>
int main ()
{
	int round, i;
	char order[50];
	scanf("%d", &round);
	scanf(" %s", order);
	
	int ball[round];
	for(i=0; i<=round; i++)
		ball[i] = 1;
	
	for(i=0; i<strlen(order); i++)
	{
		if(order[i] == 'A')
		{
			switch(ball[i])
			{
				case '2': ball[i] = 3; break;
				case '3': ball[i] = 2; break;
				default: ball[i] = ball[i]; break;
			}
		}
		if(order[i] == 'B')
		{
			switch(ball[i])
			{
				case '1': ball[i] = 4; break;
				case '4': ball[i] = 1; break;
				default: ball[i] = ball[i]; break;
			}
		}
		if(order[i] == 'C')
		{
			switch(ball[i])
			{
				case '1': ball[i] = 3; break;
				case '2': ball[i] = 4; break;
				case '3': ball[i] = 1; break;
				case '4': ball[i] = 2; break;
				default: ball[i] = ball[i]; break;
			}
		}

	}
}
