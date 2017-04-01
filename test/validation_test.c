#include "ctest.h"
#include "deposit.h"

CTEST(validation_tests, sump_datep)
{
	int sum = 10001;
	int date = 1;
	int result = check_input(sum, date);
	ASSERT_EQUAL(result, 0);
}

CTEST(validation_tests, summ_datep)
{
	int sum = 9999;
	int date = 1;
	int result = check_input(sum, date);
	ASSERT_EQUAL(result, 1);
}

CTEST(validation_tests, summ_datem)
{
	int sum = 9999;
	int date = -1;
	int result = check_input(sum, date);
	ASSERT_EQUAL(result, 1);
}

CTEST(validation_tests, sump_datem)
{
	int sum = 10001;
	int date = -1;
	int result = check_input(sum, date);
	ASSERT_EQUAL(result, 1);
}