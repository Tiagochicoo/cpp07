/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/07 22:17:14 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    // Test with int type
    Array<int> a; // Empty array
    std::cout << "Size of a: " << a.getSize() << std::endl;

    Array<int> b(5); // Array of size 5
    for (size_t i = 0; i < b.getSize(); ++i) {
        b[i] = i * 2;
    }
    std::cout << "b elements: ";
    for (size_t i = 0; i < b.getSize(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    Array<int> c(b); // Copy constructor
    std::cout << "c elements (copied from b): ";
    for (size_t i = 0; i < c.getSize(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    Array<int> d(3); // Array of size 3
    d = b; // Copy assignment
    std::cout << "d elements: (assigned from b) ";
    for (size_t i = 0; i < d.getSize(); ++i) {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
