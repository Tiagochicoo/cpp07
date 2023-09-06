/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:22 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/06 21:26:35 by tpereira         ###   ########.fr       */
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
	T	*type;
	int	len;

public:
	Array();
	~Array();

	Array(Array const &src);
	
};

#include "Array.tpp"

#endif /* ******************************************************** ARRAY_H */
