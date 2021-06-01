#include <numeric>
#include <unordered_map>
#include <cstring>
#include <algorithm>

#include "score.hpp"

int scrambleScore(std::string word){
	std::for_each(std::begin(word), std::end(word), [](char& c){ c = std::toupper(c); });
	std::unordered_map<char, int> map{
		{ 'A', 1 },
		{ 'E', 1 },
		{ 'I', 1 },
		{ 'O', 1 },
		{ 'U', 1 },
		{ 'L', 1 },
		{ 'N', 1 },
		{ 'R', 1 },
		{ 'S', 1 },
		{ 'T', 1 },
		{ 'D', 2 },
		{ 'G', 2 },
		{ 'B', 3 },
		{ 'C', 3 },
		{ 'M', 3 },
		{ 'P', 3 },
		{ 'F', 4 },
		{ 'H', 4 },
		{ 'V', 4 },
		{ 'W', 4 },
		{ 'Y', 4 },
		{ 'K', 5 },
		{ 'J', 8 },
		{ 'X', 8 },
		{ 'Q', 10 },
		{ 'Z', 10 } };
	return std::accumulate(std::begin(word), 
						   std::end(word), 
						   0, 
						   [=](int acc, char c){ return acc + map.at(c); });
}
