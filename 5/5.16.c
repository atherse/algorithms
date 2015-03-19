#include <stdio.h>
#include <stdlib.h>

int LEN = 10;

int get_max_array(int len, int *num_array){
		len--;
		if(len == 1){
				return num_array[0];
		}
		int temp = get_max_array(len, (num_array+1));
		if(num_array[0] > temp)
				return num_array[0];
		else
				return temp;
}

int main(){
		int max = 0;
		int num_arr[10] = {2,23,123,12321,23,4,23,23,44555,1};
		max = get_max_array(10, num_arr);
		printf("%d\n", max);
}
