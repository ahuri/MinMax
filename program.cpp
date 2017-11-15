#include "Max.h"
#include <iostream>
using namespace std;

class IntComparer
{
private:
	bool m_byLargest;
public:
	IntComparer(bool byLargest) : m_byLargest(byLargest) {}
	int operator()(int a, int b)
	{
		return m_byLargest ? a - b : b - a;
	}
};

int main()
{
	cout << MinMax(3, 4, IntComparer(true)) << endl;
	cout << MinMax(3, 4, IntComparer(false)) << endl;
}