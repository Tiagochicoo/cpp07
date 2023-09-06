/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/06 21:18:27 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

template <typename T>
void printValue(const T &value) {
    std::cout << value << " ";
}

template <typename T>
void squareValue(const T &value) {
    std::cout << value * value << " ";
}


int main(void) {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    int intArrayLen = sizeof(intArray) / sizeof(intArray[0]);
    double doubleArrayLen = sizeof(doubleArray) / sizeof(doubleArray[0]);
    char charArrayLen = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Printing int array: ";
    iter(intArray, intArrayLen, printValue<int>);
    std::cout << std::endl;

    std::cout << "Printing double array: ";
    iter(doubleArray, doubleArrayLen, printValue<double>);
    std::cout << std::endl;

    std::cout << "Printing char array: ";
    iter(charArray, charArrayLen, printValue<char>);
    std::cout << std::endl;

    std::cout << "Squaring values in int array: ";
    iter(intArray, intArrayLen, squareValue<int>);
    iter(intArray, intArrayLen, printValue<int>);
    std::cout << std::endl;

    std::cout << "Square values in double array: ";
    iter(doubleArray, doubleArrayLen, squareValue<double>);
    iter(doubleArray, doubleArrayLen, printValue<double>);
    std::cout << std::endl;

    return 0;
}

