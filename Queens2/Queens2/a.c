#include<stdio.h>
#include<math.h>
int a[30], c = 0;

int place(int pos)
{
	int i;
	for (i = 1; i < pos; i++)
	{
		if ((a[i] == a[pos]) || (abs(a[i] - a[pos]) == abs(i - pos)))
			return 0;
	}
	return 1;
}

void afisare(int n)
{
	int i, j;
	c++;
	printf("Solutia %d: \n", c);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (a[i] == j)
			{
				printf("Q ");
			}
			else printf(". ");
		}
		printf("\n");
	}
}

void queen(int n)
{
	int k = 1;
	a[k] = 0;
	while (k != 0)
	{
		do
		{
			a[k]++;
		} while ((a[k] <= n) && !place(k));
		if (a[k] <= n)
		{
			if (k == n) afisare(n);
			else
			{
				k++;
				a[k] = 0;
			}
		}
		else
		{
			k--;
		}
	}
}
int main()
{
	int n=8;
	queen(n);
	printf("\nNumarul total de solutii este: %d", c);
	return 0;
}