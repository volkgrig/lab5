// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
int sortt(int nn, int mm, int **aa)
{
	int p;
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < mm-1; j++)
		{
			for (int h = j + 1; h < mm; h++)
			{
				if (aa[i][j] > aa[i][h])
				{
					p = aa[i][j];
					aa[i][j] = aa[i][h];
					aa[i][h] = p;
				}
			}
			
		}
	};
	std::cout << "Poluch:\n";
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < mm; j++)
		{
			
			std::cout << aa[i][j] << " ";
		}
		std::cout << "\n";
	};
	return 0;
}

int main()
{
    std::cout << "Sortirovka massiva po strokam\n"; 
	int m, n;
	std::cout << "Enter n:\n";
	std::cin >> n;
	std::cout << "Enter m:\n";
	std::cin >> m;
	int **a;
	a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int [m];
	}
	std::cout << "\n";
	std::cout << "Ishod:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 99 + 1;
			std::cout << a[i][j] << " ";
		}
		std::cout<<"\n";
	};
	std::cout << "\n";
	sortt(n, m, a);
	return 0;
}

