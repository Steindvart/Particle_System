#pragma once

#include <random>
#include <chrono>
#include <functional>
#include <cstdint>

int32_t GetRandomInt32(int32_t min = std::numeric_limits<int32_t >::min(), int32_t max = std::numeric_limits<int32_t >::max())
{
	std::mt19937 rndType(static_cast<unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count()));

	return std::bind(std::uniform_int_distribution<int32_t>(min, max), rndType)();
}