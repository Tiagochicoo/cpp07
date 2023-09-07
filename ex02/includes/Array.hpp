/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:22 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/07 08:36:17 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <class T>
class Array
{
private:
	T *_array;
	size_t _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &src);
	Array<T> &operator=(Array<T> const &rhs);
	~Array();

};

#include "Array.tpp"

#endif /* ******************************************************** ARRAY_H */
