#include <stdlib.h>
#include <stdio.h>


char *a;
int i;

int eval(){
		int x = 0;
		while(a[i] == ' ')
				i++;
		if(a[i] == '+'){
				i++;
				return eval() + eval();
		}

		if(a[i] == '*'){
				i++;
				return eval() * eval();
		}
		
		while(a[i] >= '0' && a[i] <= '9'){
				x = x*10 + (a[i++] - '0');
		}
		return x;
}
int main(){
		a = "92";
		int res = eval();
		printf("%d", res);
}
