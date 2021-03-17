#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void clear()
{
	while (getchar() != '\n');
}


int GetInt(int*pn, int Min , int Max)
{
	int rc;
	char after;
	rc =scanf("%d%c",pn,&after);
    if (rc == 0)
	{
		clear();
		return 1;
	}
	else if (after != '\n')
	{
		clear();
		return 2;
	}
	else if (*pn < Min || Max < *pn)
	{
		return 3;
	}
	else {
		return 0;
	}
}
void bubbleSort(int a[], int* n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				std::swap(a[j], a[j - 1]);
}


int main()
{int n,inputError;
	do
	{
		printf("Input How many Element ?\n");

		inputError = GetInt(&n,0,12);
		fflush(stdin);
		switch(inputError)
		{
			case 1:
			printf("**No input acceptedn.Please try again!**\n");
			break;
			case 2:
			printf("**Trailing character.Please try again!**\n");
			break;
			case 3:
			printf("**The number  of element must be in range 2 to 12. Please Try again!!***\n");
			break;
		}

	} while(inputError);

	int a[n];
	for (int i=0;i< n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubbleSort(a[10],n);
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
























}