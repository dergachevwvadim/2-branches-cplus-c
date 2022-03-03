
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void summa()
{
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("\nC=%d\n", a + b);

}


int main()
{
	int p;
	printf("What we want to do?\n 1-summ;\n 2-sub; \n 3-multip; \n 4-div; \n 5-exp; \n 6-summ_matrix;\n");
	scanf_s("%d", &p);
	switch (p)
	{
	case 1:
	{
		{
			summa();
			break;
		}
	}
	case 2:
	{
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		printf("\nC=%d\n", a - b);
		break;
	}
	case 3:
	{
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		printf("\nC=%d\n", a * b);
		break;
	}
	case 4:
	{
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		printf("\nC=%d\n", a / b);
		break;
	}
	case 5:
	{
		double a, b;
		int c;
		scanf_s("%lf", &a);
		scanf_s("%lf", &b);
		c = pow(a, b);
		printf("\nC=%d\n", c);
		break;
	}
	case 6:
	{
		const int N = 3;
		int a[N][N],b[N][N] ;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf_s("%d", &a[i][j]);
			}

						for (int i = 0; i < N; i++)
						{
							for (int j = 0; j < N; j++)		
							{
								scanf_s("%d", &b[i][j]);
							}
						}


			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					printf("%d ", a[i][j]);
				}  
				printf("\n");
				
				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						printf("%d ", b[i][j]);
					}
				}
				printf("\n");
			}
			
		}
		
		break;
	}
	default:
	{
	
	}
	}
	return 0;
}

