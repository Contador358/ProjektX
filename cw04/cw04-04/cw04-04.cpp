#include <stdio.h>
#include <math.h>

int main()
{

float a,b,c,x0,x1,x2,delta;
printf("podaj wartosc a:\n");
scanf("%f", &a);
printf("podaj wartosc b:\n");
scanf("%f", &b);
printf("podaj wartosc c:\n");
scanf("%f", &c);

delta=(b*b)-(4*a*c);
if (delta<0){
        printf("brak miejsc zerowych w R\n");
}
else if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("miejsca zerowe to%3.2f\n ",x1);
        printf("oraz%3.2f\n ",x2);
}
else{
        x0=(-b)/(2*a);
        printf("miejsce zerowe to%3.2f\n ",x0);
}
return 0;
}
