add_library(Score SHARED
  src/score.cpp
)

target_include_directories (Score PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(ut)
