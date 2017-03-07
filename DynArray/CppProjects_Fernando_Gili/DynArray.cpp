#include "DynArray.h"
using namespace std;

DynArray::DynArray() :m_capacity{ DYN_ARRAY_DEFAULT_SIZE }, m_size{ DYN_ARRAY_DEFAULT_SIZE }, m_data{ nullptr }  {

	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];



}



DynArray::DynArray(size_t size, const int &value) : m_capacity{ DYN_ARRAY_DEFAULT_SIZE }, m_data{ nullptr }{

	m_data = new int(size);
	for (int i = 0; i < size; i++);
	m_data[i] = value;



}


DynArray::~DynArray() {

	delete[] m_data;
	m_data = nullptr;


}

bool operator=(const DynArray & x)
{
	
}




int* DynArray::begin(void) const{




}


int* DynArray::end(void) const {


}


bool operator==(const DynArray & lhs, const DynArray & rhs)
{
	
}

ostream & operator<<(ostream & out, const DynArray & x)
{
	
}


void DynArray::fill(int * first, int * last, int value)
{
}

