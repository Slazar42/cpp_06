/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:05:52 by slazar            #+#    #+#             */
/*   Updated: 2024/10/28 02:31:44 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string const &input) : _input(input)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if (this != &rhs)
	{
		_input = rhs._input;
	}
	return *this;
}

void ScalarConverter::convert()
{
	displayChar();
	displayInt();
	displayFloat();
	displayDouble();
}

void ScalarConverter::displayChar()
{
	std::cout << "char: ";
	try
	{
		int i = std::stoi(_input);
		if (i < 0 || i > 127)
			throw std::exception();
		if (std::isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::displayInt()
{
	std::cout << "int: ";
	try
	{
		int i = std::stoi(_input);
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::displayFloat()
{
	std::cout << "float: ";
	try
	{
		float f = std::stof(_input);
		if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity())
			std::cout << f << "f" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::displayDouble()
{
	std::cout << "double: ";
	try
	{
		double d = std::stod(_input);
		if (d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity())
			std::cout << d << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./scalar_converter <value>" << std::endl;
		return 1;
	}
	ScalarConverter sc(av[1]);
	sc.convert();
	return 0;
}