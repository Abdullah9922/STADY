//https://judge.beecrowd.com/en/problems/view/2313
#include <stdio.h>
#include <math.h>
int main ()
{

	int a,b,c;

	int ans=0;

	scanf("%d %d %d",&a,&b,&c);

	if(a+b > c && b+c > a && a+c > b)
	{

		ans = 5;

		if((a == b && a != c) || (c == b && a != c) || (a == c && b != c))
		{
			printf("Valido-Isoceles\n");
		}

		else if(a==b && b==c)
		{
			printf("Valido-Equilatero\n");
		}

		else if(a!=b && b!=c && a!=c)
		{
			printf("Valido-Escaleno\n");
		}
	}
	else
	{
		printf("Invalido\n");
	}

	if(ans == 5)
	{
		if(pow(a,2) == (pow(b,2) + pow(c,2))  || pow(b,2) == (pow(a,2) + pow(c,2)) || pow(c,2) == (pow(b,2) + pow(a,2)))
		{
			printf("Retangulo: S\n");
		}

		else
		{
			printf("Retangulo: N\n");
		}
	}



}
