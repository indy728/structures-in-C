#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

int		main()
{
	t_store	store;

	store.goods = "Watermelon";
	store.price = 6;
	printf("Today, the price of %s is $%d\n", store.goods, store.price);
	printf("\x1b[32m\033[1mSUCCESS! Proceed to ex01!\x1b[0m\n");
	return (0);
}
