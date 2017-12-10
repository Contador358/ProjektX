#include<stdio.h>
#include<math.h>

float ppros(float a, float b){
	return a*b;	
}
float pkola(float r){
  	return 3.14*r*r;	
  }
float ptrojk(float a,float h){
	return (a*h)/2;	
   }
   
int main(){
	printf("\nProgram liczacy pole prostokatu, kola lub trojkata\n");
	printf("Aby obliczyc pole prostokatu wcisnij 1\n");
	printf("Aby obliczyc kolo kolo wcisnij 2\n");
	printf("Aby obliczyc pole trojkata wcisnij 3\n");
	int cyfra;
	printf("Podaj cyfre od 1 do 3:\n");
	printf("cyfra = ");
	scanf("%d", &cyfra);
	
	switch(cyfra){
		case 1: printf("\nLiczysz pole prostokata\n");
			float a,b;
			printf("bok a :");
			scanf("%f", &a);
			printf("\nbok b :");
			scanf("%f", &b);
			if((a<=0)||(b<=0))
				printf("Boki nie moga byc ujemne!\n");
			else
				printf("pole prostokata to: %f\n",ppros(a,b));
			break;
		
		case 2: printf("\nLiczysz pole kola\n");
			float r;
			printf("promien r wynosi:");
			scanf("%f", &r);
			if(r<=0)
				printf("pole nie moze byc ujemne!\n");
			else	
				printf("pole kola to: %f\n",pkola(r));
			break;	
		case 3:	printf("\nLiczysz pole trojkata\n");
			float a2,h;
			printf("bok a wynosi:");
			scanf("%f", &a2);
			printf("wysokosc h wynosi:");
			scanf("%f", &h);
			if((a2<=0)||(h<=0))
				printf("Bok lub wysokosc nie moga byc mniejsze od 0!\n");
			else	
				printf("pole trojkata to: %f\n",ptrojk(a2,h));
			break;
		default: printf("blad danych\n");		
	}	
	return 0;
	
}
