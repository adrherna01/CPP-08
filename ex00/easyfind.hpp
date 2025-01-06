/* ************************************************************************** */
/*		                                                                    */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:14:33 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/06 17:02:48 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <stack>

template <typename T>
int easyfind(T& cont, int n) {
	for (const auto& elem : cont) {
		if (elem == n) {
			return n;
		}
	}
	throw std::runtime_error("Element not found");
}

#endif