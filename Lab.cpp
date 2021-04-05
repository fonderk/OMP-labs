#include<iostream>
#include<omp.h>
#include<conio.h>
using namespace std;
void main ( char **argv)
{
#pragma omp parallel num_threads(4)
	{
		printf("Hello World!\n");
	}
	int n;
	cin >> n;
}	