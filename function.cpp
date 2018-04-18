#include <time.h>
#include <iostream>
#include "function.h"

using namespace std;

void Fillmass(int *massiv, int size)
{
	for (int i = 0; i < size; i++)
	{
		massiv[i] = rand() % 10;
	}
}

void DFillmass(double *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = (rand() % 10) / (rand() % 10);
	}
}
void Outmass(int *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}

void DOutmass(double *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}



int Max(int *mass, int size)
{
	int flag = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (flag < mass[i])
		{
			flag = mass[i];
		}
	}
	return flag;
}



double DMax(double *mass, int size)
{
	double flag = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (flag < mass[i])
		{
			flag = mass[i];
		}
	}
	return flag;
}


int Min(int *mass, int size)
{
	int flag = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (flag > mass[i])
		{
			flag = mass[i];
		}
	}
	return flag;
}


double DMin(double *mass, int size)
{
	double flag = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (flag > mass[i])
		{
			flag = mass[i];
		}
	}
	return flag;
}


void Sort(int *mass, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (mass[j - 1] > mass[j])
			{
				temp = mass[j - 1];
				mass[j - 1] = mass[j];
				mass[j] = temp;
			}
		}
	}
}


void DSort(double *mass, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (mass[j - 1] > mass[j])
			{
				temp = mass[j - 1];
				mass[j - 1] = mass[j];
				mass[j] = temp;
			}
		}
	}
}