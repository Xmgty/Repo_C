#include <iostream>
#include <conio.h>
#include <cstring>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include "function.h"

using namespace std;


#define INTEGRER
#ifdef INTEGRER
#define Fill Fillmass(*mass, size);
#define Out Outmass(*mass, size);
#define Maxs Max(*mass, size);
#define Mins Min(*mass, size);
#define Sorts Sort(*mass, size);
#endif

void main()
{
	int n = 0;
	cin >> n;
	int *ptrmass = new int[n];
	Fill(*ptrmass, n);
	

}