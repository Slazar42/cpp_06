/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:03:57 by slazar            #+#    #+#             */
/*   Updated: 2024/11/12 03:09:14 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>

struct Data {
    int data;
};

class Serialize {
public:
    Serialize();
    ~Serialize();
    Serialize(Serialize const & src);
    Serialize & operator=(Serialize const & src);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};