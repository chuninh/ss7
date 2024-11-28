#include<stdio.h>
int main(){
	int numbers[5] = {1,2,3,4,5};
	int i;
	for(i=0;i<5;i++){
		if(numbers[i] % 2 !=0){
			numbers[i] = numbers[i] + 2;
		}
	}
	for(i =0;i<5;i++){
		printf("%d",numbers[i]);
	}
	
	
	return 0;
	
}
