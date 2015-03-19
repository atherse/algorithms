#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Item.h"
#include "STACK.h"

static Item *s;
static int N;

void STACKinit(int maxN){
		s = malloc(maxN * sizeof(Item));
		N = 0;
}

void STACKpush(Item item){
		s[N++] = item;
}

Item STACKpop(){
		return s[--N];
}

int main(int argc, char *argv[]){
		char *a = argv[1];
		int i, strN = strlen(a);
		STACKinit(strN);
		for(i = 0; i < strN; i++){
				if(a[i] == '+')
						STACKpush(STACKpop() + STACKpop());
				if(a[i] == '*')
						STACKpush(STACKpop() * STACKpop());
				if((a[i] >= '0') && (a[i] <= '9'))
						STACKpush(0);
				while((a[i] >= '0') && (a[i] <= '9')){
						STACKpush(10*STACKpop() + (a[i++]-'0'));
				}
		}
		printf("%d\n", STACKpop());
}
