#ifndef _VECTOR_H
#define _VECTOR_H

#include "includedheaders.h"

template<typename T>
class vector {
	T *_element;
	std::size_t _size;

public:
	vector() : _element{ nullptr }, _size{ 0 } {}
	vector(std::size_t size);
	vector(const vector &vec);
	vector(const vector &&vec);

	~vector();

	inline std::size_t size() const { return _size; }

	inline T& operator[](std::size_t i) { return _element[i]; }

	vector& operator=(vector vec);

};

template<typename T>
vector<T>::vector(std::size_t size)
{
	try {
		_element = new T[size];
	}
	catch (std::bad_array_new_length &e) {
		std::cerr << "Bad length caught: " << e.what() << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << "Other exception caught: " << e.what() << '\n';
	}

	_size = size;
}

template<typename T>
vector<T>::vector(const vector &vec)
{
	_size = vec._size;
	_element = new T[vec._size];

	for (std::size_t i = 0; i < vec._size; ++i)
		_element[i] = vec._element[i];
}

template<typename T>
vector& vector<T>::operator=(vector vec)
{
	std::swap(_elements, temp._elements);
	std::swap(_size, temp._size);

	return *this;
}

template<typename T>
vector<T>::~vector()
{
	if (_element)
	{
		delete[] _element;
		_element = nullptr;
	}
}



#endif