#include <stdio.h>
#include "deposit.h"

int main()
{
	int sum_inset, time;

	do{
		printf("Введите сумму вклада (не менее 10 000 рублей): ");
		scanf("%d", &sum_inset);
		printf("Введите срок вклада (не более 365 дней): ");
		scanf("%d", &time);	
		check_input(sum_inset, time);
		if(check_input(sum_inset, time) == 1)
			printf("ERROR\n");
	} while(check_input(sum_inset, time) == 1);
	
	float calc = calculation(sum_inset, time);
	int income_inset = income(sum_inset, calc);
	printf("Годовой доход при сроке в %d дней и сумме %d рублей составит: %0.2f\n", time, sum_inset, calc);
	printf("Доходность вклада составляет: %d\n", income_inset);
	return 0;
}
