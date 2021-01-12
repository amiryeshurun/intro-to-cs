#pragma once

typedef struct
{
	char* name;
	int amountInStock;
	double price;
} Product;

typedef struct
{
	char* name;
	int numberOfProducts;
	Product** products;
} Store;

Product* allocateProduct(char* name, int amountInStock, double price);

Store* allocateStore(char* name);

void addProduct(Store* store, Product* product);

void removeProduct(Store* store, char* productName);

void freeProduct(Product* product);

void sortProductsByPrice(Store* store);