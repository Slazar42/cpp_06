/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:05 by slazar            #+#    #+#             */
/*   Updated: 2024/11/11 07:45:23 by slazar           ###   ########.fr       */
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
    private:
        ScalarConverter();
    public:
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &ref);
        ScalarConverter& operator=(const ScalarConverter &ref);
        static  void    Convert(std::string input);

	class ImpossibleException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};