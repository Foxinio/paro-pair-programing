#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, MarchTest)
{
  ASSERT_EQ(dayOfYear(3, 7, 2019), 66);
}

TEST(DayOfYearTestSuite, MarchTestOddYear)
{
  ASSERT_EQ(dayOfYear(3, 7, 2020), 67);
}
