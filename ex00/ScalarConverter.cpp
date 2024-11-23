/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:05:52 by slazar            #+#    #+#             */
/*   Updated: 2024/11/12 02:55:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
	*this = ref;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &ref)
{
	(void)ref;
	return (*this);
}
 
const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return ("impossible");
}
void	ScalarConverter::Convert(std::string input)
{
	std::string::size_type sz;
	double d;
	float f;
	int i;
	char c;
	try
	{
		if (input.length() == 1 && !std::isdigit(input[0]))
		{
			c = input[0];
			std::cout << "char: "<< "'" << c << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
			return ;
		}
		d = std::stod(input, &sz);
		if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() || std::isnan(d) || std::isinf(d))
			throw ImpossibleException();
		c = static_cast<char>(d);
		if (std::isprint(c))
			std::cout << "char: "<< "'" << c << "'" << std::endl;
		else
				std::cout << "char: Non displayable" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: " << e.what() << std::endl;
	}
	try
	{
		i = static_cast<int>(std::stoi(input, &sz));
		if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max() || std::isnan(i) || std::isinf(i))
			throw ImpossibleException();
		std::cout << "int: " << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	try
	{
		f = std::stof(input, &sz);
		if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max() || std::isnan(f) || std::isinf(f))
			throw ImpossibleException();
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	try
	{
		d = std::stod(input, &sz);
		if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max() || std::isnan(d) || std::isinf(d))
			throw ImpossibleException();
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
	}
}
