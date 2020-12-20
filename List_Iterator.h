#include "Iterator.h"
#include <list>

class List_Iterator :public Iterator
{
private:
	std::list<double> l;
	int ptr_pos;
public:
	List_Iterator(std::list<double> v);
	double* next() override;
}; 
