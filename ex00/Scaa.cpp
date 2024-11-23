/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scaa.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:05:52 by slazar            #+#    #+#             */
/*   Updated: 2024/11/09 01:34:11 by slazar           ###   ########.fr       */
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

void	ScalarConverter::Convert(std::string input)
{
	std::string::size_type sz;
	double d;
	float f;
	int i;
	char c;

	try
	{
		d = std::stod(input, &sz);
		if (input[sz] == '\0')
		{
			std::cout << "char: ";
			if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() || std::isnan(d) || std::isinf(d))
				throw ImpossibleException();
			c = static_cast<char>(d);
			if (std::isprint(c))
				std::cout << "'" << c << "'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
	}

	try
	{
		f = std::stof(input, &sz);
		if (input[sz] == '\0')
		{
			std::cout << "int: ";
			if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max() || std::isnan(f) || std::isinf(f))
				throw ImpossibleException();
			i = static_cast<int>(f);
			std::cout << i << std::endl;
		}
		else
			std::cout << "int: impossible" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
	}

	try
	{
		f = std::stof(input, &sz);
		if (input[sz] == '\0')
		{
			std::cout << "float: " << f << "f" << std::endl;
		}
		else
			std::cout << "float: impossible" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}

	try
	{
		d = std::stod(input, &sz);
		if (input[sz] == '\0')
		{
			std::cout << "double: " << d << std::endl;
		}
		else
			std::cout << "double: impossible" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
	}
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return ("impossible");
}

