#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"
lp initList(int max){
		lp head, temp;
		head = malloc((max+1) * (sizeof *head));
		head->num = max;
		srand(time(0));
		for(int i = 0; i < max+1; i++){
				head[i].next = &head[i+1];
				head[i].num = rand()%100;
		}
		head[max].next = NULL;
		return head;
}

int getList(int pos, lp list){
		lp temp = list;
		while(pos--){
				temp = temp->next;	
		}
		return temp->num;
}

void setList(int pos, int obj,  lp list){
		lp temp = list;
		while(pos--){
				temp = temp->next;	
		}
		temp->num = obj;
}

void loop_get(lp head){
		lp temp = head->next;
		while(temp != NULL){
				printf("%d\n", temp->num);
				temp = temp->next;
		}
}

int main(){
		lp firstlist = initList(3);
		loop_get(firstlist);
}

