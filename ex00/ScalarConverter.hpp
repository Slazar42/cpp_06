/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:05 by slazar            #+#    #+#             */
/*   Updated: 2024/10/27 21:06:35 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include <cmath>

class ScalarConverter
{
public:
	ScalarConverter(std::string const &input);
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter();

	ScalarConverter &operator=(ScalarConverter const &rhs);

	void convert();
	void displayChar();
	void displayInt();
	void displayFloat();
	void displayDouble();
	