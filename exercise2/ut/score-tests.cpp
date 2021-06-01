#include "score.hpp"
#include "gtest/gtest.h"

struct ScoreTestSuite {};


TEST(ScoreTestSuite, CabbageTest)
{
	ASSERT_EQ(scrambleScore("cabbage"), 14);
}

TEST(ScoreTestSuite, EggTest)
{
	ASSERT_EQ(scrambleScore("egg"), 5);
}
