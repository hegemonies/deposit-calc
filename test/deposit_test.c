#include "ctest.h"
#include "deposit.h"

int sum_less_min = 90000;
int sum_border_min = 100000;
int sum_more_min = 100001;


//time: 29, 30, 31 ; sum: 90000, 100000, 100001
CTEST(calculation, time1_29_sum_90000)//true
{
	double a = sum_less_min * 0.9;
	int time = 29;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_29_sum_100000)//true
{
	double a = sum_border_min * 0.9;
	int time = 29;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_29_sum_100001)//true
{
	double a = sum_more_min * 0.9;
	int time = 29;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_30_sum_90000)//true
{
	double a = sum_less_min * 0.9;
	int time = 30;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_30_sum_100000)//true
{
	double a = sum_border_min * 0.9;
	int time = 30;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_30_sum_100001)//true
{
	double a = sum_more_min * 0.9;
	int time = 30;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time1_31_sum_90000)//false
{
	double a = sum_less_min * 0.9;
	int time = 31;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time1_31_sum_100000)//false
{
	double a = sum_border_min * 0.9;
	int time = 31;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time1_31_sum_100001)//false
{
	double a = sum_more_min * 0.9;
	int time = 31;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}
//end

//time:29, 30, 31, 120, 121 ; sum: 90000, 100000, 100001
CTEST(calculation, time2_29_sum_90000)//false
{
	double a = sum_less_min * 1.02;
	int time = 29;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_29_sum_100000)//false
{
	double a = sum_border_min * 1.02;
	int time = 29;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_29_sum_100001)//false
{
	double a = sum_more_min * 1.03;
	int time = 29;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_30_sum_90000)//false
{
	double a = sum_less_min * 1.02;
	int time = 30;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_30_sum_100000)//false
{
	double a = sum_border_min * 1.02;
	int time = 30;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_30_sum_100001)//false
{
	double a = sum_more_min * 1.03;
	int time = 30;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_31_sum_90000)//true
{
	double a = sum_less_min * 1.02;
	int time = 31;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_31_sum_100000)//true
{
	double a = sum_border_min * 1.02;
	int time = 31;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_31_sum_100001)//true
{
	double a = sum_more_min * 1.03;
	int time = 31;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_120_sum_90000)//true
{
	double a = sum_less_min * 1.02;
	int time = 120;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_120_sum_100000)//true
{
	double a = sum_border_min * 1.02;
	int time = 120;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_120_sum_100001)//true
{
	double a = sum_more_min * 1.03;
	int time = 120;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time2_121_sum_90000)//false
{
	double a = sum_less_min * 1.02;
	int time = 121;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_121_sum_100000)//false
{
	double a = sum_border_min * 1.02;
	int time = 121;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time2_121_sum_100001)//false
{
	double a = sum_more_min * 1.03;
	int time = 121;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}
//end

//time: 120, 121, 122, 240, 241 ; sum: 90000, 100000, 100001
CTEST(calculation, time3_120_sum_90000)//false
{
	double a = sum_less_min * 1.06;
	int time = 120;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time3_120_sum_100000)//false
{
	double a = sum_border_min * 1.06;
	int time = 120;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time3_120_sum_100001)//false
{
	double a = sum_more_min * 1.08;
	int time = 120;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time3_121_sum_90000)//true
{
	double a = sum_less_min * 1.06;
	int time = 121;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_121_sum_100000)//true
{
	double a = sum_border_min * 1.06;
	int time = 121;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_121_sum_100001)//true
{
	double a = sum_more_min * 1.08;
	int time = 121;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_122_sum_90000)//true
{
	double a = sum_less_min * 1.06;
	int time = 122;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_122_sum_100000)//true
{
	double a = sum_border_min * 1.06;
	int time = 122;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_122_sum_100001)//true
{
	double a = sum_more_min * 1.08;
	int time = 122;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_240_sum_90000)//true
{
	double a = sum_less_min * 1.06;
	int time = 240;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_240_sum_100000)//true
{
	double a = sum_border_min * 1.06;
	int time = 240;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_240_sum_100001)//true
{
	double a = sum_more_min * 1.08;
	int time = 240;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time3_241_sum_90000)//false
{
	double a = sum_less_min * 1.06;
	int time = 241;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time3_241_sum_100000)//false
{
	double a = sum_border_min * 1.06;
	int time = 241;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time3_241_sum_100001)//false
{
	double a = sum_more_min * 1.08;
	int time = 241;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}
//end

//time: 240, 241, 242 ; sum: 90000, 100000, 100001
CTEST(calculation, time4_240_sum_90000)//false
{
	double a = sum_less_min * 1.12;
	int time = 240;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time4_240_sum_100000)//false
{
	double a = sum_border_min * 1.12;
	int time = 240;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time4_240_sum_100001)//false
{
	double a = sum_more_min * 1.15;
	int time = 240;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_FAR(result, a);
}

CTEST(calculation, time4_241_sum_90000)//true
{
	double a = sum_less_min * 1.12;
	int time = 241;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time4_241_sum_100000)//true
{
	double a = sum_border_min * 1.12;
	int time = 241;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time4_241_sum_100001)//true
{
	double a = sum_more_min * 1.15;
	int time = 241;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time4_242_sum_90000)//true
{
	double a = sum_less_min * 1.12;
	int time = 242;
	double result = calculation(sum_less_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time4_242_sum_100000)//true
{
	double a = sum_border_min * 1.12;
	int time = 242;
	double result = calculation(sum_border_min, time);
	ASSERT_DBL_NEAR(result, a);
}

CTEST(calculation, time4_242_sum_100001)//true
{
	double a = sum_more_min * 1.15;
	int time = 242;
	double result = calculation(sum_more_min, time);
	ASSERT_DBL_NEAR(result, a);
}
//end
