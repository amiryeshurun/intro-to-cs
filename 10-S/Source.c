#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void main()
{
	Product* p1 = allocateProduct("Rice", 20, 10);
	Product* p2 = allocateProduct("Chicken", 10, 2);
	Store* store = allocateStore("Super");
	addProduct(store, p1);
	addProduct(store, p2);
	puts(store->products[0]->name);
	sortProductsByPrice(store);
	puts(store->products[0]->name);
}