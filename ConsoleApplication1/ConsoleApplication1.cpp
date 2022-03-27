
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

void input_array(double** x, int X_arr, int Y_arr)
{
	int arrMax = 100, arrMin = 0;
	for (int i = 0; i < X_arr; i++)
		for (int j = 0; j < Y_arr; j++)
			x[i][j] = arrMin + (arrMax - arrMin) * ((double)rand() / RAND_MAX);

}

void input_arrai(double** y, int X_arr, int Y_arr)
{
	int arrMax = 100, arrMin = 0;
	for (int i = 0; i < X_arr; i++)
		for (int j = 0; j < Y_arr; j++)
			y[i][j] = arrMin + (arrMax - arrMin) * ((double)rand() / RAND_MAX);

}


void print_array(double** x, int X_arr, int Y_arr) 
{
	for (int i = 0; i < X_arr; i++) 
	{
		for (int j = 0; j < Y_arr; j++)
			printf("%lf ", x[i][j]);
		printf("\n ");
	}
}
void print_arrai(double** y, int X_arr, int Y_arr)
{
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
			printf("%lf ", y[i][j]);
		printf("\n ");
	}
}

/* void summ_matrix(double x[][N], double y[][N], double result[][N])
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
*/
int main()
{	
	int arr_X, arr_Y;
	int p;
	double** x;
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
			scanf_s("%d%d", &arr_X, &arr_Y);
			double** array_heap = (double**)malloc(arr_X * sizeof(double*));
			for (int i = 0; i < arr_X; ++i) 
			{
				array_heap[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			input_array(array_heap, arr_X, arr_Y);
			input_arrai(array_heap, arr_X, arr_Y);
			print_array(array_heap, arr_X, arr_Y);
			print_arrai(array_heap, arr_X, arr_Y);
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			return 0;
		}
		break;
	}
	/*case 7:
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
	*/

	default:
	{
	
	}
	}
	return 0;
}

