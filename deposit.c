#include <stdio.h>

int check_input(int sum, int time)
{
	if((sum > 10000) && ((time <= 365) && (time >= 0)))	
		return 0;
	return 1;
}

float calculation(int sum, int time)
{
	float tmp;
	if(time < 31)
		tmp = sum * 0.9;
	if((time > 30) && (time < 121)){
		if(sum < 100001)
			tmp = sum * 1.02;
		else
			tmp = sum * 1.03;
	}
	if((time > 120) && (time < 241)){
		if(sum < 100001)
			tmp = sum * 1.06;
		else
			tmp = sum * 1.08;
	}
	if(time > 240){
		if(sum < 100001)
			tmp = sum * 1.12;
		else
			tmp = sum * 1.15;	
	}
	return tmp;
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
	
	float calc = calculation(sum_inset, time);
	printf("Годовой доход при сроке в %d дней и сумме %d рублей составит: %0.2f\n", time, sum_inset, calc);
	return 0;
}
