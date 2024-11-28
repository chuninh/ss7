#include<stdio.h>
int main(){
	int numbers[5] = {1,2,3,4,5};
	int i;
	for(i =0;i<5;i++){
	    if(numbers[i] % 2 ==0){
	    	printf("%d",numbers[i]);
		}else{
			printf("ko co so chan");
		}
	}
	
	return 0;
	
}
