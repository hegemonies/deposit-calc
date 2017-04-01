#include "ctest.h"
#include "deposit.h"

CTEST(validation_tests, sump_datep)
{
	int sum = 9999;
	int date = -1;
	int result = check_input(sum, date);
	ASSERT_EQUAL(result, 1);
}


