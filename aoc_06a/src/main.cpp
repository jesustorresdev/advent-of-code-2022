#include <fmt/core.h>

#include <aoc.hpp>

int main()
{
	std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);
  	auto [pos, marker] = aoc::Solve(input, 4);

	fmt::print("{} ({})", pos, marker);

	return 0;
}
