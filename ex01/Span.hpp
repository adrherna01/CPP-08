/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:26:37 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/06 15:33:48 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm> 

class Span {
	private:
		std::vector<unsigned int> _vector;
		unsigned int _maxSize;

	public:

		class NoSpanFound : public std::exception {
			public:
				const char* what() const noexcept override {
					return "No span can be found";
				}
		};

		class FullSpan : public std::exception {
			public:
				const char* what() const noexcept override {
					return "Cannot add more elements (Span is full)";
				}
		};

		class InvalidRange : public std::exception {
			public:
				const char* what() const noexcept override {
					return "Range addition is invalid";
				}
		};

		Span();
		Span(unsigned int maxSize);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(unsigned int num);
		void addNumber(unsigned int begin, unsigned int end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};