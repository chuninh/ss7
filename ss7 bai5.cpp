#include<stdio.h>
int main(){
	int numbers[5] = {1,2,3,4,5};
	int i;
	int max = numbers[0];
	int min = numbers[0];
	
	for(i =0;i<5;i++){
	    if(numbers[i]<min){
	    	min = numbers[i];
		}
		if(numbers[i > max]){
			max = numbers[i];
		}
	}
	printf("%d",min);
	
	printf("%d",max);
	
	
	return 0;
	
}
