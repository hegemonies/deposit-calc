#include <stdio.h>

int check_input(int sum, int time)
{
	if((sum > 10000) && ((time < 365) && (time >= 0)))	
		return 0;
	return 1;
}

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
	
	if(check_input(sum_inset, time) == 0)
		printf("ВСЕ ОК\n");
	
	return 0;
}
