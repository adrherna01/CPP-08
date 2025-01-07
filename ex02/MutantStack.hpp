/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:50:17 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/07 13:12:58 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>


template <typename T>
class MutantStack : public std::stack<T> {
	public:
		using iterator = typename std::stack<T>::container_type::iterator;

		MutantStack() = default;
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other) {
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		};
		~MutantStack() = default;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

};