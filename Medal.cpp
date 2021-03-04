#include <stdio.h>
int main ()
{
	int year, i, best = 1, worst = 2000, Byear, Wyear;
	scanf("%d", &year);
	
	int gold[year], silver[year], bronze[year], value[year];
	for(i=0; i<year; i++)
	{
		scanf("%d %d %d", &gold[i], &silver[i], &bronze[i]);
		value[i] = (4*gold[i])+(2*silver[i])+bronze[i];
		printf("Year %d = %d gold %d silver %d bronze = %d\n", i+1, gold[i], silver[i], bronze[i], value[i]);
	}
	
	for(i=0; i<year-2; i++)
	{
		if(best < value[i]+value[i+1]+value[i+2])
		{
			best = value[i]+value[i+1]+value[i+2];
			Byear = i+1;
		}
		if(worst > value[i]+value[i+1]+value[i+2])
		{
			worst = value[i]+value[i+1]+value[i+2];
			Wyear = i+1;
		}
	}
	
	printf("%d %d", best, worst);
	return 0;
}
