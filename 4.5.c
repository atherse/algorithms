#include <stdlib.h>
#include "Item.h"
typedef struct STACKnode* link;

struct STACKnode{
		Item item;
		link next;
};

static link head;
link NEW(Item item, link next){
		link x = malloc(sizeof *x);
		x->item = item;
		x->next = next;
}



