#include<iostream>
#include<omp.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

int main(){
int k = 3;
int rank;
#pragma omp parallel private(rank)
	
{	rank = omp_get_thread_num();
	printf("I am %d thread.\n", rank);
		
	}
	
}