#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array
{
	T* data;
	size_t size;
public:
	Array(size_t size) : size(size)
	{
		data = new T[size];
	}

	// Copy constructor
	Array(const Array& other)
	{
		this->data = new T[other.getSize()];
		this->size = other.getSize();

		for (size_t i = 0; i < other.getSize(); i++)
		{
			this->data[i] = other.data[i];
		}
	}

	// Move constructor
	Array(Array&& other) noexcept : data(other.data), size(other.size)
	{
		other.data = nullptr;
		other.size = 0;
	}

	// Copy assignment operator
	Array& operator=(const Array& other)
	{
		if (this == &other) return *this;

		delete[] data;

		this->data = new T[other.getSize()];
		this->size = other.getSize();

		for (size_t i = 0; i < other.getSize(); i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
	}

	// Move assignment operator
	Array& operator=(Array&& other) noexcept
	{
		if (this == &other) return *this;

		delete[] data;

		data = other.data;
		size = other.size;

		other.data = nullptr;
		other.size = 0;
	}

	// Destructor
	~Array()
	{
		delete[] data;
	}

	// Defining [] operator
	T& operator[](size_t index)
	{
		if (index >= size)
		{
			throw std::out_of_range("Array index out of bonds");
		}

		return data[index];
	}

	// Defining [] const operator
	const T& operator[](size_t index) const
	{
		if (index >= size)
		{
			throw std::out_of_range("Array index out of bonds");
		}

		return data[index];
	}

	// Implement begin() for iterating
	const T* begin() const
	{
		return data;
	}

	// Implement end() for iterating
	const T* end() const
	{
		return data + size;
	}

	// Getter
	const size_t getSize() const { return this->size; }
};


#endif // !ARRAY_H
