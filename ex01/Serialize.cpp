/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:13:10 by slazar            #+#    #+#             */
/*   Updated: 2024/11/18 10:40:33 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize() {
}

Serialize::~Serialize() {
}

Serialize::Serialize(Serialize const & src) {
	*this = src;
}

Serialize & Serialize::operator=(Serialize const & src) {
	if (this != &src) {
		*this = src;
	}
	return *this;
}


uintptr_t Serialize::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

