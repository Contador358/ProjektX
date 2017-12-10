#include <stdio.h>
#include <math.h>
int main()
{
        float decyzja=0;
        do
        {
        float a,b,c,x0,x1,x2,delta;
        printf("podaj wartosc a:");
        scanf("%f",&a);
        printf("podaj wartosc b:");
        scanf("%f",&b);
        printf("podaj wartosc c:");
        scanf("%f",&c);
        delta=(b*b)-(4*a*c);
        if(delta<0){
                printf("brak miejsc zerowych w R");
        }
        else if(delta>0){
               x1=(-b-sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                printf("miejsca zerowe to%3.f ",x1);
                printf("oraz%3.f ",x2);
        }
        if(delta==0){
                x0=(-b)/(2*a);
                printf("miejsce zerowe to%3.f ",x0);
        }
        printf("\nczy chcesz zakonczyc program?(nie=1,tak=0)\n ");
        scanf("%f",&decyzja);
        }while (decyzja==1);
}
