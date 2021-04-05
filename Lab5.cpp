#include<iostream>
#include<omp.h>
#include<conio.h>
#include<Windows.h>
#include <functional>
using namespace std;

int main() {
int i;
int N=4;
int sum=0;
#pragma omp parallel num_threads(2)
#pragma for reduction(+:sum)
	

	{	
	if (omp_get_thread_num() == 0) {
		int sum = 0;
		for (i = 1; i <= (N / 2); i++)
			sum = sum + i;
		cout << sum; 
		cout << "\n";
	}
	else {
		int sum = 0;
		for (i = (N/2)+1; i <= N; i++) 
			sum = sum + i;
		cout << sum; 
		cout << "\n";
		
	}
	}
	
}