/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:54:27 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/06 16:55:32 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	try {
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(5);
	} catch (const Span::FullSpan& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Span sp2(5);
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
	} catch (const Span::NoSpanFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Span sp3(10);
		sp3.addNumber(5, 3);
	} catch (const Span::InvalidRange& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Span sp4(2);
		sp4.addNumber(10);
		std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl;
	} catch (const Span::NoSpanFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}