#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct punkt{
        float x,y;

}P;

struct okrag{
        struct punkt S;
        float r;
}O;

int lok_P(void){
        float odl;
        odl=sqrt(pow(P.x-O.S.x,2)+(P.y-O.S.y,2));
        if(odl==O.r)
                return 1;
        else if(odl<O.r)
                return 2;
        else if(odl<O.r)
                return 3;
}

int main(){
printf("podaj wspl punktu\n");
scanf("%f%f", &P.x, &P.y);
printf("Podaj wspl srodka okregu i promien\n");
scanf("%f%f%f", &O.S.y, &O.S.x, &O.r);

switch(lok_P()){
        case 1: printf("Odleglosc wynosi r\n");
        break;
        case 2: printf("Odleglosc jest wieksza od r\n");
        break;
        case 3: printf("Odleglosc mniejsza od r\n");
        default: printf("Bledne dane\n");
}
return 0;
}



