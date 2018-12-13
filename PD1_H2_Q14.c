/* Draw a flow chart to print all Strong numbers between 1 to n */
#include<stdio.h>

int main() {
	
	int cnt = 2;
	int n;
	int x;
	int dgt;
	int i;
	int fact = 1;
	int sum = 0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(; cnt <= n; cnt++){
		x = cnt;
		for(; cnt > 0; cnt /= 10) {
			dgt = cnt % 10; 
			for(i = dgt; i>=1; i--){
				fact *= i;
			}
		sum += fact;
		fact = 1;
		}
		if(sum == x)
			printf("%d\n", x);
		cnt = x;
		sum = 0;	
	}
		
	return 0;
	
}
