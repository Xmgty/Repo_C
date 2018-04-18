#pragma once
void Fillmass(int *massiv, int size);
void DFillmass(double *mass, int size);
void Outmass(int *mass, int size);
void DOutmass(double *mass, int size);
int Max(int *mass, int size);
double DMax(double *mass, int size);
int Min(int *mass, int size);
double DMin(double *mass, int size);
void Sort(int *mass, int size);
void DSort(double *mass, int size);



#define INTEGRER
#ifdef INTEGRER
#define Fill Fillmass(int *massiv, int size);
#define Out Outmass(int *mass, int size);
#define Maxs Max(int *mass, int size);
#define Mins Min(int *mass, int size);
#define Sorts Sort(int *mass, int size);
#endif
#ifndef INTEGRER
#define Fill DFillmass(*mass, size);
#define Out DOutmass(*mass, size);
#define Maxs DMax(*mass, size);
#define Mins DMin(*mass, size);
#define Sorts DSort(*mass, size);
#endif

