#include "Iterator.h"
#include <vector>

class Vector_Iterator:public Iterator
{
private:
	std::vector<double> v;
	int ptr_pos;
public:
	Vector_Iterator(std::vector<double>& v);
	double* next() override;
};