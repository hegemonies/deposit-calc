#include <stdio.h>
#include "deposit.h"
#define min_arg_inset 10000

int check_input(int sum, int time)
{
	if((sum > min_arg_inset) && ((time <= 365) && (time >= 0)))
		return 0;
	return 1;
}

float calculation(int sum, int time)
{
	float tmp;
	if(time < 31)
		tmp = sum * 0.9;
	if((time > 30) && (time < 121)){
		if(sum <= min_arg_inset)
			tmp = sum * 1.02;
		else
			tmp = sum * 1.03;
	}
	if((time > 120) && (time < 241)){
		if(sum <= min_arg_inset)
			tmp = sum * 1.06;
		else
			tmp = sum * 1.08;
	}
	if(time > 240){
		if(sum <= min_arg_inset)
			tmp = sum * 1.12;
		else
			tmp = sum * 1.15;
	}
	return tmp;
}

int income(int first_sum, int last_sum)
{
	return (last_sum - first_sum);
}
