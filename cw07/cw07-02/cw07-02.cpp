#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
if(argc!=4){
        puts("nieprawidlowa ilosc parametrow\n");
        return (1);
        }

        float x,y;
        char dz;
        x=atof(argv[1]);
        y=atof(argv[3]);
        sscanf(argv[2],"%c", &dz);
        switch(dz){
                case '-': printf("%f-%f=%f\n",x,dz,y,x-y);
                break;
                case '+': printf("%f+%f=%f\n",x,dz,y,x+y);
                break;
        default: printf("pow(%f,%f)",x,y);
        }
return 0;
}

