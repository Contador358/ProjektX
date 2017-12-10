#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=10;
	int b=2;
	int c=1;
	float x3,x1,x2,delta;

		delta=b*b-4*a*c;
		printf("delta=%f\n", delta);
	if (delta==0){
	
		x3=-b/(2*a);
		printf("x3=%f\n", x3);
}
	if (delta>0){
	
		x1=(-b-sqrt(delta))/2*a;
		x2=(-b+sqrt(delta))/2*a;
		printf("x1=%f\n", x1);
		printf("x2=%f\n", x2);
}
	if (delta<0)
		printf("brak miejsc zerowych\n");		
	
	
	
	return 0;
}
