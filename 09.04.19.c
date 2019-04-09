#include<stdio.h>
typedef unsigned int uint;
void decToBin(uint numDec);

//ler numero float
// separar a parte inteira da parte fracionaria
//exibir as partes
int main (){
	float x = 20.35;
	int xInt= (int)x;
	float xFrac= x - xInt;
	printf("%.2f = %d + %.2f\n", x, xInt,xFrac);
	decToBin(xInt);
	
	return 0;
	
}


void decToBin(uint numDec){
	const uint wordCpu=16;
	int digit[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i= 0, j;
	while (numDec >= 2){
		digit[i]=numDec%2;
		numDec=numDec / 2;
		i++;
	}
	digit[i]=1;
	// last quocient
	for (j=wordCpu-1;j>=0; j--)
		printf("%d", digit[j]);
		putchar('\n');
		
	}
	
	
