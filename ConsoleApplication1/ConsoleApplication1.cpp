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
	return pow(x, y);
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

void print_array(double** x, int X_arr, int Y_arr)
{
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
			printf("%lf ", x[i][j]);
		printf("\n ");
	}
}

void summ_matrix(double** array_heap, double** array_heapi, int X_arr, int Y_arr)
{
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
			printf("%lf", array_heap[i][j] + array_heapi[i][j]);
		printf("\n ");
	}
}

void sub_matrix(double** array_heap, double** array_heapi, int X_arr, int Y_arr)
{
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
			printf("%lf", array_heap[i][j] - array_heapi[i][j]);
		printf("\n ");
	}
}

void det_matrix(double** array_heap, int X_arr, int Y_arr)
{
	double d = 0;
	{
		d = array_heap[0][0] * array_heap[1][1] * array_heap[2][2] + array_heap[0][1] * array_heap[1][2] * array_heap[2][0]
			+ array_heap[1][0] * array_heap[2][1] * array_heap[0][2] - array_heap[2][0] * array_heap[1][1] * array_heap[0][2] -
			array_heap[2][1] * array_heap[1][2] * array_heap[0][0] - array_heap[1][0] * array_heap[0][1] * array_heap[2][2];
	}
	{
		printf("%lf ", d);
		printf("\n ");
	}
}

int main()
{
	int arr_X, arr_Y;
	int p;
	double d;
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
			double** array_heapi = (double**)malloc(arr_X * sizeof(double*));
			for (int i = 0; i < arr_X; ++i)
			{
				array_heap[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			for (int i = 0; i < arr_X; ++i)
			{
				array_heapi[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			input_array(array_heap, arr_X, arr_Y);
			input_array(array_heapi, arr_X, arr_Y);
			print_array(array_heap, arr_X, arr_Y);
			print_array(array_heapi, arr_X, arr_Y);
			summ_matrix(array_heap, array_heapi, arr_X, arr_Y);
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			for (int i = 0; i < arr_X; i++)
				free(array_heapi[i]);
			free(array_heapi);
			return 0;
		}
		break;
	}
	case 7:
	{
		{
			scanf_s("%d%d", &arr_X, &arr_Y);
			double** array_heap = (double**)malloc(arr_X * sizeof(double*));
			double** array_heapi = (double**)malloc(arr_X * sizeof(double*));
			for (int i = 0; i < arr_X; ++i)
			{
				array_heap[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			for (int i = 0; i < arr_X; ++i)
			{
				array_heapi[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			input_array(array_heap, arr_X, arr_Y);
			input_array(array_heapi, arr_X, arr_Y);
			print_array(array_heap, arr_X, arr_Y);
			print_array(array_heapi, arr_X, arr_Y);
			sub_matrix(array_heap, array_heapi, arr_X, arr_Y);
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			for (int i = 0; i < arr_X; i++)
				free(array_heapi[i]);
			free(array_heapi);
			return 0;
		}
	}
	break;
	case 8:
	{
		{
			scanf_s("%d%d", &arr_X, &arr_Y);
			double** array_heap = (double**)malloc(arr_X * sizeof(double*));
			for (int i = 0; i < arr_X; ++i)
			{
				array_heap[i] = (double*)malloc(arr_Y * sizeof(double));
			}
			input_array(array_heap, arr_X, arr_Y);
			print_array(array_heap, arr_X, arr_Y);
			det_matrix(array_heap, arr_X, arr_Y);
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			break;
		}
	}

	default:
	{
	}
	}
	return 0;
}
