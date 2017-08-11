/* print the table of fahrenheit temperatures and their celsius equivalents */

#include<stdio.h>
int main(){
	float fahrn, celsius;
	int lower = 0;
	int upper = 500;
	int step = 20;
	fahrn = lower;
	printf("Fahrenheit to Celsius table\n");
	while(fahrn <= upper){
		celsius = 5 * (fahrn - 32) / 9;
		printf("%.2f\t%.2f\n", fahrn, celsius);
		fahrn = fahrn + step;
	}
}

