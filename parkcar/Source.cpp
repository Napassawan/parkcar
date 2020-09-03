#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a, b;
int main()
{
	printf("Enter the time you parked your car : ");
	scanf("%d %d", &a, &b);
	if (b > 0)
	{
		a++;
		a *= 30;
		printf("You have to pay %d Baht", a);
	}
	else
	{
		a *= 30;
		printf("You have to pay %d Baht", a);
	}
}