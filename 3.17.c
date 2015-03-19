#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Nmax 5
#define Mmax 5
char buf[Mmax];
int M = 0;
int compare (void *i, void *j){
		return strcmp((*(char **)i), (*(char **)j));
}
		
int main(){
		int i, N;
		char *a[Mmax];
		for(N = 0; N < Nmax; N++){
				a[N] = &buf[M];
				if(scanf("%s", a[N]) == EOF) break;
				M += strlen(a[N] + 1);
		}
		qsort(a, N, sizeof(char*), compare);
		printf("-------------------------\n");
		for(i = 0; i < N; i++) printf("%s\n\n", a[i]);
}

