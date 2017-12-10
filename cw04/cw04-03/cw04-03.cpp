#include <stdio.h>
#include <math.h>

int main()
{
float a=2,b=3,c=1;
float x0,x1,x2,delta;

delta=b*b-4*a*c;
if(delta<0){
        printf("brak miejsc zerowych w R");
}
else if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("miejsca zerowe to%3.2f ",x1);
        printf("oraz%3.2f ",x2);
}
else{
        x0=(-b)/(2*a);
        printf("miejsce zerowe to%3.2f ",x0);
}
return 0;
}
