#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	const int N=20;
	srand(time(NULL));
	int x[N],y[N];
	
	//t�mb felt�lt�se -100 �s 100 k�z�tti v�letlen sz�mokkal
	printf("Az x tomb elemei: \n");
	for(int i=0;i<N;i++){
		x[i]=rand()%201-100;
		printf("%d, ",x[i]);		
	}
	
	//p�ros sz�mok �tm�sol�sa az y t�mb elej�re
	printf("\n\n");
	printf("Az y tomb elemei: \n");
	for(int i=0;i<N;i++){
		if(x[i]%2==0){
			y[i]=x[i];
			printf("%d, ",y[i]);
		}
	}
	
	//p�ratlan sz�mok �tm�sol�sa az y t�mb v�g�re	
	for(int i=0;i<N;i++){
		if(x[i]%2!=0){
			y[i]=x[i];
			printf("%d, ",y[i]);
		}
	}
	printf("\n\n");
	//az y t�mbben a p�ros sz�mok rendez�se besz�r� rendez�ssel n�vekv� sorrendben
	printf("Az y tomb paros elemei novekvo sorban: \n");	
								//innen nem m�k�dik
		for(int i=1;i<N;i++){						
			int j=i-1;			
			if(y[j]%2==0){
				while(j>=0 && y[j]>y[j+1]){					
					int temp=y[j];
						y[j]=y[j+1];
						y[j+1]=temp;			
							
					j--;													
				}
				printf("%d, ",y[j]);
			}
																
		}
	
}
