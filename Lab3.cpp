#include<iostream>
#include<omp.h>
#include<conio.h>
using namespace std;

int main(){
int k = 3;
#pragma omp parallel num_threads(k)
	
{	if (omp_get_thread_num() % 2 == 0)
		printf("I am %d thread from %d threads!\n",
			omp_get_thread_num(), //Номер нити в параллельной области 
			omp_get_num_threads() //Количество нитей в параллельной об-ласти);
		);
	}
	
}