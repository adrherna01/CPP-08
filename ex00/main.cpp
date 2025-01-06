/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:14:31 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/06 14:03:10 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

	try {
		int foundVec = easyfind(vec, 3);
		std::cout << "Vector: " << foundVec << std::endl;

		foundVec = easyfind(vec, 6);
		std::cout << "Vector: " << foundVec << std::endl;

		foundVec = easyfind(vec, 8);
		std::cout << "Vector: " << foundVec << std::endl;

	} catch (const std::runtime_error& e) {
		std::cout << "Error (vector): " << e.what() << std::endl;
	}

	std::list<int> lst = {1, 2, 3, 4, 5};

	try {
		int foundLst = easyfind(lst, 4);
		std::cout << "List: " << foundLst << std::endl;

		foundLst = easyfind(lst,  5);
		std::cout << "List: " << foundLst << std::endl;

		foundLst = easyfind(lst,  8);
		std::cout << "List: " << foundLst << std::endl;

	} catch (const std::runtime_error& e) {
		std::cout << "Error (list): " << e.what() << std::endl;
	}

	return 0;
}
