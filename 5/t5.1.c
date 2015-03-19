#include <stdio.h>
#include <stdlib.h>

int compute_num(int num){
		if(num == 0) 
				return 1;
		else
				return num*compute_num(num-1);
}

int main(){
		int res = compute_num(3);
		printf("%d\n", res);
}
