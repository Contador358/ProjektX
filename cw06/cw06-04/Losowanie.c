#include<stdio.h>
#include<time.h>

int main(){
	int i,los,tab[2001];
	srand(time(0));
	los=rand()%2001;
	for(i=0;i<2001;i++)
    	tab[i]=i;
	int l=0;
	int p=i-1;
	while(l<=p){
		int s=(l+p)/2;
		if(tab[s]==los){
			printf("szukana liczba to %d\n",tab[s]);
			break;
			}
		else if(tab[s]<los){
			l=s+1;
			printf("zgadywana liczba to %d\n",tab[s]);
			}
		else if(tab[s]>los){
			p=s-1;
			printf("zgadywana liczba to %d\n",tab[s]);
		}
	}		
return 0;
}

