/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:52:42 by slazar            #+#    #+#             */
/*   Updated: 2024/11/23 16:10:51 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base{
public:
	virtual ~Base() {};
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);
