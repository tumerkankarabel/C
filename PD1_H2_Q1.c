#include<stdio.h>

/*Write an algorithm and draw a flowchart that will read the two sides of a rectangle and calculate its area and perimeter*/
int main() {

	int a, b;
	int per;
	int area;
	
	printf("Enter width and height: ");
	scanf("%d%d",&a, &b);
	
	per = 2 * (a + b);
	area = a * b;
	
	printf("Perimeter = %d\tArea = %d",per, area);
	
	return 0;
	
}
