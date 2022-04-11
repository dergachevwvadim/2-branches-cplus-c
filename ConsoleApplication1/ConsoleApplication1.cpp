#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

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
	{
		for (int j = 0; j < Y_arr; j++)
			x[i][j] = arrMin + (arrMax - arrMin) * ((double)rand() / RAND_MAX);
		printf("\n ");
	}
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
double** summ_matrix(double** array_heap, double** array_heapi, int X_arr, int Y_arr)
{
	double** x = (double**)malloc(X_arr * sizeof(double*));
	for (int i = 0; i < X_arr; ++i)
	{
		x[i] = (double*)malloc(Y_arr * sizeof(double));
	}
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
		{
			x[i][j] = array_heap[i][j] + array_heapi[i][j];
		}
	}
	return x;
}

double** sub_matrix(double** array_heap, double** array_heapi, int X_arr, int Y_arr)
{
	double** x = (double**)malloc(X_arr * sizeof(double*));
	for (int i = 0; i < X_arr; ++i)
	{
		x[i] = (double*)malloc(Y_arr * sizeof(double));
	}
	for (int i = 0; i < X_arr; i++)
	{
		for (int j = 0; j < Y_arr; j++)
		{
			x[i][j] = array_heap[i][j] - array_heapi[i][j];
		}
	}
	return x;
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

const int N_vectors = 1;

struct vector
{
	int x;
	int y;
	int z;
	int x2;
	int y2;
	int z2;
	int x3;
	int y3;
	int z3;
};

int main()
{
	int arr_X, arr_Y;
	char p;
	double d;
	printf("What we want to do?\n 1-summ(+);\n 2-sub(-); \n 3-multip(*); \n 4-div(/); \n 5-exp(^); \n 6-summ_matrix(M);\n 7-sub_matrix(S);\n 8-det_matrix(d);\n 9-summ_vectors(>);\n 10-sub_vectors(<);\n 11-Length_vectors(L)\n");
	scanf_s("%c", &p, 1);
	switch (p)
	{
	case '+':
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = summ(z, y);
		print_on_screen(x);
		FILE* fp;
		fopen_s(&fp, "answer.txt", "w");
		fprintf(fp, "%lf", x);
		fclose(fp);
		break;

	}
	case '-':
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = sub(z, y);
		print_on_screen(x);
		FILE* fp;
		fopen_s(&fp, "answer.txt", "w");
		fprintf(fp, "%lf", x);
		fclose(fp);
		break;
	}
	case '*':
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = multip(z, y);
		print_on_screen(x);
		FILE* fp;
		fopen_s(&fp, "answer.txt", "w");
		fprintf(fp, "%lf", x);
		fclose(fp);
		break;
	}
	case '/':
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = div(z, y);
		print_on_screen(x);
		FILE* fp;
		fopen_s(&fp, "answer.txt", "w");
		fprintf(fp, "%lf", x);
		fclose(fp);
		break;
	}
	case '^':
	{
		double x, y, z;
		scanf_s("%lf", &z);
		scanf_s("%lf", &y);
		x = pow(z, y);
		print_on_screen(x);
		FILE* fp;
		fopen_s(&fp, "answer.txt", "w");
		fprintf(fp, "%lf", x);
		fclose(fp);
		break;
	}
	case 'M':
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
			printf("\n ");
			print_array(array_heapi, arr_X, arr_Y);
			printf("\n ");
			double** S = summ_matrix(array_heap, array_heapi, arr_X, arr_Y);
			print_array(S, arr_X, arr_Y);
			FILE* fp;
			fopen_s(&fp, "answer.txt", "w");
			for (int i = 0; i < arr_X; ++i)
			{
				for (int j = 0; j < arr_Y; ++j)
				{
					fprintf(fp, "%lf ", S[i][j]);
				}
				fprintf(fp, "\n");
			}
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			for (int i = 0; i < arr_X; i++)
				free(array_heapi[i]);
			free(array_heapi);
			for (int i = 0; i < arr_X; i++)
				free(S[i]);
			free(S);
			fclose(fp);
			return 0;
		}
		break;
	}
	case 'S':
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
			printf("\n ");
			print_array(array_heapi, arr_X, arr_Y);
			printf("\n ");
			double** S = sub_matrix(array_heap, array_heapi, arr_X, arr_Y);
			print_array(S, arr_X, arr_Y);
			FILE* fp;
			fopen_s(&fp, "answer.txt", "w");
			for (int i = 0; i < arr_X; ++i)
			{
				for (int j = 0; j < arr_Y; ++j)
				{
					fprintf(fp, "%lf ", S[i][j]);
				}
				fprintf(fp, "\n");
			}
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			for (int i = 0; i < arr_X; i++)
				free(array_heapi[i]);
			free(array_heapi);
			for (int i = 0; i < arr_X; i++)
				free(S[i]);
			free(S);
			fclose(fp);
			return 0;
		}
	}
	break;
	case 'd':
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
			printf("\n ");
			det_matrix(array_heap, arr_X, arr_Y);
			for (int i = 0; i < arr_X; i++)
				free(array_heap[i]);
			free(array_heap);
			break;
		}
	}
	case '>':
	{
		struct vector vector[N_vectors];

		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x1: ");
			scanf_s("%d", &vector[i].x);
			printf("y1: ");
			scanf_s("%d", &vector[i].y);
			printf("z1: ");
			scanf_s("%d", &vector[i].z);
		}
		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x2: ");
			scanf_s("%d", &vector[i].x2);
			printf("y2: ");
			scanf_s("%d", &vector[i].y2);
			printf("z2: ");
			scanf_s("%d", &vector[i].z2);
			printf("x3= %d\n", vector[i].x3 = vector[i].x + vector[i].x2);
			printf("y3= %d\n", vector[i].y3 = vector[i].y + vector[i].y2);
			printf("z3= %d\n", vector[i].z3 = vector[i].z + vector[i].z2);
			printf("vector= %d %d %d\n", vector[i].x3, vector[i].y3, vector[i].z3);
		}
		return 0;


	}

	case '<':
	{
		struct vector vector[N_vectors];

		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x1: ");
			scanf_s("%d", &vector[i].x);
			printf("y1: ");
			scanf_s("%d", &vector[i].y);
			printf("z1: ");
			scanf_s("%d", &vector[i].z);
		}
		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x2: ");
			scanf_s("%d", &vector[i].x2);
			printf("y2: ");
			scanf_s("%d", &vector[i].y2);
			printf("z2: ");
			scanf_s("%d", &vector[i].z2);
			printf("x3= %d\n", vector[i].x3 = vector[i].x - vector[i].x2);
			printf("y3= %d\n", vector[i].y3 = vector[i].y - vector[i].y2);
			printf("z3= %d\n", vector[i].z3 = vector[i].z - vector[i].z2);
			printf("vector= %d %d %d\n", vector[i].x3, vector[i].y3, vector[i].z3);
		}
		return 0;
	}

	case 'L':
	{
		struct vector vector[N_vectors];

		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x1: ");
			scanf_s("%d", &vector[i].x);
			printf("y1: ");
			scanf_s("%d", &vector[i].y);
			printf("z1: ");
			scanf_s("%d", &vector[i].z);
		}
		for (int i = 0; i < N_vectors; ++i)
		{
			printf("x2: ");
			scanf_s("%d", &vector[i].x2);
			printf("y2: ");
			scanf_s("%d", &vector[i].y2);
			printf("z2: ");
			scanf_s("%d", &vector[i].z2);
			printf("x3= %d\n", vector[i].x3 = pow((vector[i].x2 - vector[i].x), 2));
			printf("y3= %d\n", vector[i].y3 = pow((vector[i].y2 - vector[i].y), 2));
			printf("z3= %d\n", vector[i].z3 = pow((vector[i].z2 - vector[i].z), 2));
			printf("length vector= %lf\n", sqrt(vector[i].x3 + vector[i].y3 + vector[i].z3));
		}
		return 0;
	}


	default:
	{
		printf("Error");
	}
	}
	return 0;
}