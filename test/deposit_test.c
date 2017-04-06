#include "ctest.h"
#include "deposit.h"
#define sum 1000000

CTEST(calculation, time_m31)
{
	float a = sum * 0.9;
	int time = 30;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time_30_121_wm)
{
	float a = (sum / 100) * 1.02;
	int time = 32;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time_30_121_wom)
{
	float a = sum * 1.03;
	int time = 32;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}


CTEST(calculation, time_120_241_wm)
{
	float a = (sum / 100) * 1.06;
	int time = 121;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}


CTEST(calculation, time_120_241_wom)
{
	float a = sum * 1.08;
	int time = 121;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}


CTEST(calculation, time_240_wm)
{
	float a = (sum / 100) * 1.12;
	int time = 241;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}


CTEST(calculation, time_240_wom)
{
	float a = sum * 1.15;
	int time = 241;
	float result = calculation(sum, time);
	ASSERT_DBL_NEAR(result, a);
}