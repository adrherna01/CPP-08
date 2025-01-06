/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:26:34 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/06 16:53:37 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _maxSize(50) {}

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

Span::Span(const Span& other) : _vector(other._vector), _maxSize(other._maxSize) {}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_vector = other._vector;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(unsigned int num) {
	if (_vector.size() >= _maxSize)
		throw FullSpan();

	_vector.push_back(num);
}

void Span::addNumber(unsigned int begin, unsigned int end) {
	if (begin >= end || _vector.size() + (end - begin) > _maxSize)
		throw InvalidRange();

	for (unsigned int i = begin; i < end; ++i) {
		_vector.push_back(i);
	}
}

unsigned int Span::longestSpan() {

	if (_vector.size() <= 2)
		throw NoSpanFound();

	std::sort(_vector.begin(), _vector.end());

	unsigned int maxElem = *std::max_element(_vector.begin(), _vector.end());
	unsigned int minElem = *std::min_element(_vector.begin(), _vector.end());

	return (maxElem - minElem);
}

unsigned int Span::shortestSpan() {
	unsigned int shortest = std::numeric_limits<unsigned int>::max();

	if (_vector.size() < 2)
		throw NoSpanFound();

	std::sort(_vector.begin(), _vector.end());
	for (unsigned int i = 1; i < _vector.size(); i++)
	{
		unsigned int span = _vector[i] - _vector[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

// Explanation of the Code
// Constructor: Initializes the maximum size of the Span and prepares an empty vector to store the numbers.

// addNumber(): Adds a number to the vector. If the vector has already reached the maximum size, it throws an exception.

// shortestSpan():

// Sort the vector in ascending order using std::sort.
// Then, calculate the differences between adjacent numbers in the sorted vector using a loop.
// The minimum of these differences will be the shortest span.
// longestSpan():

// Find the minimum and maximum elements in the vector using std::min_element and std::max_element.
// The longest span is simply the difference between the maximum and minimum elements.