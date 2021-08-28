#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>

typedef struct ProductInfo_struct {
	char itemName[30];
	int itemQty;
} ProductInfo;

ProductInfo IncreaseItemQty(ProductInfo productToStock, int increaseValue) {
	productToStock.itemQty = productToStock.itemQty + increaseValue;

	return productToStock;
}

int main(void) {
	ProductInfo mugInfo;
	int addQty;

	addQty = 10;

	scanf("%s", mugInfo.itemName);
	scanf("%d", &mugInfo.itemQty);

	mugInfo = IncreaseItemQty(mugInfo, addQty);

	printf("Name: %s, stock: %d\n", mugInfo.itemName, mugInfo.itemQty);

	return 0;
}
