#include "List_Iterator.h"

List_Iterator::List_Iterator(std::list<double> l0)
{
	l = l0;
	
}

double* List_Iterator::next() 
{
	if (ptr_pos == l.size())
		return 0;
	ptr_pos++;
	return nullptr;
}