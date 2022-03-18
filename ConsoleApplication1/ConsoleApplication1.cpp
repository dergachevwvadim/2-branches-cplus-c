
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double summ(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double multip(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

double exp(double x, double y)
{
	return pow(x,y);
}

void print_on_screen(double x)
{
	printf("X=%lf\n", x);
}

const int N = 3;
void inp_matrix(double x[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%lf", &x[i][j]);
		}
	}
}

void print_matrix(double x[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%lf", x[i][j]);
		}
		printf("\n");
	}
}

void summ_matrix(double x[][N], double y[][N], double result[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%lf", result[i][j] = x[i][j] + y[i][j]);
		}
	}
}


void sub_matrix(double x[][N], double y[][N], double result[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%lf", x[i][j] - y[i][j]);
		}
		printf("\n");
	}
}

double det_matrix(double x[][N])
{
	double d = 0;
	{
		return d = x[0][0] * x[1][1] * x[2][2] + x[0][1] * x[1][2] * x[2][0]
			+ x[1][0] * x[2][1] * x[0][2] - x[2][0] * x[1][1] * x[0][2] -
			x[2][1] * x[1][2] * x[0][0] - x[1][0] * x[0][1] * x[2][2];
	}
}

int main()
{
	int p;
	double a[N][N], b[N][N], res[N][N];
	printf("What we want to do?\n 1-summ;\n 2-sub; \n 3-multip; \n 4-div; \n 5-exp; \n 6-summ_matrix;\n 7-sub_matrix;\n 8-det_matrix;\n");
	scanf_s("%d", &p);
	switch (p)
	{
	case 1:
	{

		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = summ(z, y);
		print_on_screen(x);
		break;

	}
	case 2:
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = sub(z, y);
		print_on_screen(x);
		break;
	}
	case 3:
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = multip(z, y);
		print_on_screen(x);
		break;
	}
	case 4:
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = div(z, y);
		print_on_screen(x);
		break;
	}
	case 5:
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = pow(z, y);
		print_on_screen(x);
		break;
	}
	case 6:
	{
	{
			inp_matrix(a);
			inp_matrix(b);
			summ_matrix(a, b, res);
			print_matrix(res);
	}	
		break;
	}
	case 7:
	{

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf_s("%lf", &a[i][j]);
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf_s("%lf", &b[i][j]);
			}
		}



		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				printf("%lf", a[i][j]);
			}
			printf("\n");
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				printf("%lf", b[i][j]);
			}
			printf("\n");
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				printf("%lf", a[i][j] - b[i][j]);
			}
			printf("\n");
		}
		break;
	}
	case 8:
	{

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf_s("%lf", &a[i][j]);
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				printf("%lf", a[i][j]);
			}
			printf("\n");
			}
		int d = 0;
		{
			d = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0]
				+ a[1][0] * a[2][1] * a[0][2] - a[2][0] * a[1][1] * a[0][2] -
				a[2][1] * a[1][2] * a[0][0] - a[1][0] * a[0][1] * a[2][2];
		}
		{
			printf("%d ", d);
		}
		break;
	}
	

	default:
	{
	
	}
	}
	return 0;
}

