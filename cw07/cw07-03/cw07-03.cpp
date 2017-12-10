#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct punkt{
    float x,y;
}P;

struct punkt2{
    float x,y;
}P2;

float lok_P(){
    float odl;
    odl=sqrt(pow(P2.x-P.x,2)+pow(P.y-P2.y,2));
    return odl;
}

int main(){
	printf("podaj wspl punktu\n");
	scanf("%f%f", &P.x, &P.y);
	printf("Podaj wspl drugiego punktu\n");
	scanf("%f%f", &P2.x, &P2.y);
	float wynik;
	wynik=lok_P();
	printf("odleglosc wynosi %f\n",wynik);
	return 0;
}



