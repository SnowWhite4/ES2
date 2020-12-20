#include "Vector_Iterator.h"

Vector_Iterator::Vector_Iterator(std::vector<double>& v0)
{
	v = v0;
	ptr_pos = 0;
}

double* Vector_Iterator::next()
{
	if (ptr_pos < v.size())
		return &v[ptr_pos];
	ptr_pos++;
	return nullptr;
}