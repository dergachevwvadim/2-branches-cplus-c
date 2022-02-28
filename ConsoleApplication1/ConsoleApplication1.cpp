
#include <iostream>
#include <stdio.h>
#include <math.h>
void summa()
{
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	printf("\nC=%d\n", a + b);

}


int main()
{
	int p;
	printf("What we want to do?\n 1-summ;\n 2-sub; \n 3-multip; \n 4-div; \n 5-exp\n");
	std::cin >> p;
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
		std::cin >> a;
		std::cin >> b;
		printf("\nC=%d\n", a - b);
		break;
	}
	case 3:
	{
		int a, b, c;
		std::cin >> a;
		std::cin >> b;
		printf("\nC=%d\n", a * b);
		break;
	}
	case 4:
	{
		int a, b, c;
		std::cin>>a;
		std::cin >> b;
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
	}
	return 0;
}

