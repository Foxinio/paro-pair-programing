add_executable(ScrambleScoreTests
  score-tests.cpp)

target_link_libraries (ScrambleScoreTests PUBLIC Score gtest_main)

add_test(NAME Score
    COMMAND ScrambleScoreTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise1.junit.xml)
