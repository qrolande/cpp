//
// Created by Quayle Rolande on 4/2/22.
//

#ifndef CPP07_ARRAY_H
#define CPP07_ARRAY_H

#include <iostream>
# include <cstdlib>

template<typename T>
class Array {
private:
	T* data;
	unsigned int len;
public:
	Array() {
		this->data = nullptr;
		this->len = 0;
	}

	~Array() {
		delete[] this->data;
	}

	Array(unsigned int i) {
		this->data = new T[i];
		this->len = i;
	}

	Array(const Array &a) {
		data = new T[a.len];
		len = a.len;
		for (unsigned int i = 0; i < a.len; ++i) {
			data[i] = a.data[i];
		}
	}

	int size() const {
		return (this->len);
	}

	T & getData(int i) const {
		return data[i];
	}

	Array& operator=(const Array &a) {
		if (this == &a)
			return *this;

		if (this->data)
			delete[] this->data;

		if (a.size()!= 0)
		{
			this->data = new T[a.len]();
			for (unsigned int i = 0; i < a.size(); i++)
				this->data[i] = a.data[i];
		}
		else
			this->data = nullptr;

		this->len = a.len;
		return *this;
	}

	T& operator[](int i) const {
		if (i >= (int)len || i < 0) {
			std::cout << "Index " << i << " is out of range";
			throw std::out_of_range("!");
		}
		return (data[i]);
	}

};


#endif //CPP07_ARRAY_H
