#include <stdlib.h>
#include <stdio.h>
#include "Item.h"
#include "STACK.h"
static Item *s;
static int N;
static int maxN;
void STACKinit(int max){
		s = malloc(max*sizeof(Item));
		N = 0;
}
int STACKempty(){
		return N == 0;
}
void STACKpush(Item item){
		s[N++] = item;
}
Item STACKpop(){
		return s[--N];
}
int STACKerror(){
		if(N < 0){
				printf("stack is empty");
		}

		if(N > maxN){
				printf("stack is full");
		}
}
