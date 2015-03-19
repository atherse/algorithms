
#include <stdio.h>
#include <stdlib.h>

#define N 1024

int knownF[N];

int F(int i){
		int t=0;
		if(knownF[i] != 0) return knownF[i];
		if(i == 0) t = 0;
		if(i == 1) t = 1;
		if(i > 1)
				t = F(i-1) + F(i-2);
		return knownF[i] = t;
}

int main(){
		int num = 0;
		num = F(10);	
		printf("%d", num);
}
