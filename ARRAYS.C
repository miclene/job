ic#include <stdio.h>
#include <stdlib.h>
#define NUM_EMPLOYEE 10
int main(){
	int salary[NUM_EMPLOYEE],iCount=0,gCount=0,i=0;
	printf("Enter employee salary(Max 10\n)");
	
	for (i=0;i<NUM_EMPLOYEE;i++){
		printf("Enter Employee salary %d-",i+1);
		scanf("%d",&salary[i]);
		}
			for (i=0;i<NUM_EMPLOYEE;i++){
		
		if (salary[i]<3000) {
		iCount++;
		}
		else {
			gCount++;
		
	
		}
	}
	
	printf("\n There are {%d} employee with salary more than 3000\n", gCount);
	printf("There are {%d} employeee with salary less than 3000\n", iCount);
	 printf("Press Enter to continue \n");
	getchar();
return 0;
}
