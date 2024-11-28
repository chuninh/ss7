#include<stdio.h>
int main(){
	int numbers[5];
	int i;
	for(i =0;i<5;i++){
		printf("numbers[%d] = \n",i);
		scanf("%d",&numbers[i]);
	}
	for(i =0;i<5;i++){
		printf("%d",numbers[i]);
	}
	
	
	return 0;
	
}
