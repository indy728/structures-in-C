#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

void	set_sale_item(t_store	*item);

int		main()
{
	t_store	*item1;
	t_store	*item2;

	item1 = (t_store *)malloc(sizeof(t_store));
	item1->goods = strdup("bananas");
	item1->reg_price = 5;
	item2 = (t_store *)malloc(sizeof(t_store));
	item2->goods = strdup("kimchi");
	item2->reg_price = 10;

	set_sale_item(item1);	
	set_sale_item(item2);	
	printf("Today, the price of %s is $%d. You save $%d!\n",
			item1->goods, item1->sale_price, item1->reg_price - item1->sale_price);
	printf("Today, the price of %s is $%d. You save $%d!\n",
			item2->goods, item2->sale_price, item2->reg_price - item2->sale_price);
	if (!strcmp(item1->goods, "Bananas") && item1->reg_price == 5 && item1->sale_price == 4 &&
			!strcmp(item2->goods, "Kimchi") && item2->reg_price == 10 && item2->sale_price == 9)
		printf("\x1b[32m\033[1mSUCCESS! Proceed to ex02!\x1b[0m\n");
	else
		printf("\x1b[31m\033[1mFAILURE :( Please review your code and try again.\x1b[0m\n");
	free(item1->goods);
	free(item1);
	free(item2->goods);
	free(item2);
	return (0);
}
