#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

Product* allocateProduct(char* name, int amountInStock, double price)
{
	Product* product;
	
	product = (Product*)malloc(sizeof(Product));
	if (!product) // product == NULL
	{
		printf("Could not allocate space for a product\n");
		return NULL;
	}
	product->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
	if (!product->name) // product->name == NULL
	{
		printf("Could not allocate space for the name of the product\n");
		free(product);
		return NULL;
	}
	strcpy(product->name, name);
	// product->name = strdup(name);
	product->amountInStock = amountInStock;
	product->price = price;

	return product;
}

Store* allocateStore(char* name)
{
	Store* store;

	store = (Store*)malloc(sizeof(Store));
	if (!store)
	{
		printf("Could not allocate space for a store\n");
		return NULL;
	}
	store->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
	if (!store->name)
	{
		printf("Could not allocate space for the name of the store\n");
		free(store);
		return NULL;
	}
	strcpy(store->name, name);
	store->numberOfProducts = 0;
	store->products = NULL;

	return store;
}

void addProduct(Store* store, Product* product)
{
	Product** tmpProducts;

	tmpProducts = (Product**)realloc(store->products,
		(store->numberOfProducts + 1) * sizeof(Product*));
	if (!tmpProducts) // tmpProducts == NULL
	{
		printf("Could not allocate more space for the new product\n");
		return;
	}
	store->products = tmpProducts;
	// Store the new product in the last index of the array of products
	// (The length is store->numberOfProducts + 1, last index is store->numberOfProducts)
	store->products[store->numberOfProducts] = product;
	store->numberOfProducts++;
}

void removeProduct(Store* store, char* productName)
{
	if (!store->numberOfProducts) // store->numberOfProducts == 0
	{
		printf("There are no products in this store\n");
		return;
	}

	int i, j;
	Product* product;
	for (i = 0; i < store->numberOfProducts; i++)
	{
		if (strcmp(store->products[i]->name, productName) == 0) // "store->products[i]->name == name"
		{
			product = store->products[i];
			for (j = i; j < store->numberOfProducts - 1; j++)
				store->products[j] = store->products[j + 1];
			// 1. Free product
			freeProduct(product);
			// 2. Decrease the size of the products array
			if (store->numberOfProducts == 1)
			{
				free(store->products);
				store->products = NULL;
			}
			else
			{
				store->products = (Product**)realloc(store->products,
					(store->numberOfProducts - 1) * sizeof(Product*));
			}
			store->numberOfProducts--;
			break;
		}
	}
}

void freeProduct(Product* product)
{
	free(product->name);
	free(product);
}

void sortProductsByPrice(Store* store)
{
	int i, j;
	Product* tmp;
	char buffer[100];

	for (i = 0; i < store->numberOfProducts; i++)
	{
		for (j = 0; j < store->numberOfProducts - i - 1; j++)
		{
			if (store->products[j]->price > store->products[j + 1]->price)
			{
				tmp = store->products[j];
				store->products[j] = store->products[j + 1];
				store->products[j + 1] = tmp;
			}
		}
	}
}