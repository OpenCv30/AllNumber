#include <stdlib.h>
#include <stdio.h>

void dec2bin(int N){
	int sum =0;
	int a;
	int power10 =1;
	while( N){
		a= N %2;
	    sum = sum + a*power10;
		power10 = power10*10;
		N= N/2;
	}
	printf("%d\n",sum);
	
}
void bin2dec(int N){
	int sum =0;
	int a;
	int power2 =1;
	while(N){
		a= N %10;
		sum = sum+ a * power2;
		N = N/10;
		power2 = power2*2;
		//printf("%d %d %d\n",sum,a,N);
	}
	printf("%d\n",sum);
}
int main()
{
	int N = 31;
	int b= 10110;
	dec2bin(N);
	bin2dec(b);
	return 0;
	
}