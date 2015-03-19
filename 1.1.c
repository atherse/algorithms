#include <stdio.h>
#define MAXLINE 10
int main(){
	int num[MAXLINE] = {34,3,10,32,23,12,33,543,14,43};
	int i, j ,key= 0;
	for(j = 1; j < MAXLINE; j++){
		key = num[j];
		i = j-1;
		while(i >= 0 && num[i] > key){
			num[i+1] = num[i];
			i--;
		}
		num[i+1] = key;
	}
	
	for(i = 0; i < MAXLINE; i++){
		printf("%d\n",num[i]);		
	}
}
