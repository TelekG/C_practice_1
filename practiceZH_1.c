#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	const int N=20;
	srand(time(NULL));
	int x[N],y[N];
	
	//tömb feltöltése -100 és 100 közötti véletlen számokkal
	printf("Az x tomb elemei: \n");
	for(int i=0;i<N;i++){
		x[i]=rand()%201-100;
		printf("%d, ",x[i]);		
	}
	
	//páros számok átmásolása az y tömb elejére
	printf("\n\n");
	printf("Az y tomb elemei: \n");
	for(int i=0;i<N;i++){
		if(x[i]%2==0){
			y[i]=x[i];
			printf("%d, ",y[i]);
		}
	}
	
	//páratlan számok átmásolása az y tömb végére	
	for(int i=0;i<N;i++){
		if(x[i]%2!=0){
			y[i]=x[i];
			printf("%d, ",y[i]);
		}
	}
	printf("\n\n");
	//az y tömbben a páros számok rendezése beszúró rendezéssel növekvõ sorrendben
	printf("Az y tomb paros elemei novekvo sorban: \n");	
								//innen nem mûködik
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
