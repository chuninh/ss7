#include<stdio.h>
int main(){
	int numbers[8];
	int i,length;
	printf("moi ban nhap so phan tu cua mang");
	scanf("%d",&length);
	for(i =0;i<length;i++){
		printf("numbers[%d] = \n",i);
		scanf("%d",&numbers[i]);
	}
	
	
	return 0;
	
}
