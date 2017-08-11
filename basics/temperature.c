#include<stdio.h>

#define LOWER 0
#define UPPER 1000
#define STEP 10

int main(){
	int fhr;
	for(fhr = LOWER; fhr <= UPPER; fhr = fhr + STEP)
		printf("%3d\t%6.2f\n", fhr, (5.0/9.0) * (fhr-32));
}
