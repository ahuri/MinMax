#pragma once

template<typename T, typename COMP>
T MinMax(T a, T b, COMP comp)
{
	return comp(a, b) > 0 ? a : b;
}