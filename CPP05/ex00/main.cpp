/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 14:49:28 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    std::cout << "===========TEST OVERLOAD OSTREAM=========== " << std::endl;
    
    // Bureaucrat    *defaultBureaucrat = new Bureaucrat();
    Bureaucrat    *paramBureaucrat = new Bureaucrat("John", 3);
    Bureaucrat    *copyBureaucrat = new Bureaucrat(*paramBureaucrat);
	Bureaucrat	*higherBureaucrat = new Bureaucrat("Patrick", 148);
    
    std::cout << *higherBureaucrat << std::endl;
    std::cout << *paramBureaucrat << std::endl;
    std::cout << *copyBureaucrat << std::endl;

    std::cout << "===========TEST INCREMENT/DECREMENT GRADE & EXCEPTION=========== " << std::endl;
    try
    {
        (*paramBureaucrat)++;
        std::cout << *paramBureaucrat << std::endl;
        (*higherBureaucrat)++; // <--- exception catched
        std::cout << *higherBureaucrat << std::endl;
        (*higherBureaucrat)++; // <--- exception catched
        std::cout << *higherBureaucrat << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete(paramBureaucrat);
    delete(copyBureaucrat);
    delete(higherBureaucrat);
    // delete defaultBureaucrat;

    return (0);
}