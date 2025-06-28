/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/06/28 16:13:53 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    std::cout << "===========TEST OVERLOAD OSTREAM=========== " << std::endl;
    
    // Bureaucrat    *defaultBureaucrat = new Bureaucrat();
    Bureaucrat    *paramBureaucrat = new Bureaucrat("John", 1);
    Bureaucrat    *copyBureaucrat = new Bureaucrat(*paramBureaucrat);
	Bureaucrat	*higherBureaucrat = new Bureaucrat("Patrick", 149);
    
    std::cout << *higherBureaucrat << std::endl;
    std::cout << *paramBureaucrat << std::endl;
    std::cout << *copyBureaucrat << std::endl;


    std::cout << "===========TEST INCREMENT/DECREMENT GRADE & EXCEPTION=========== " << std::endl;

    try
    {
        ++(*paramBureaucrat);
        std::cout << *paramBureaucrat << std::endl;
        ++(*higherBureaucrat); // <--- exception catched
        std::cout << *higherBureaucrat << std::endl;
        ++(*higherBureaucrat); // <--- exception catched
        std::cout << *higherBureaucrat << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "===========TEST DEEP COPY=========== " << std::endl;
    
    *higherBureaucrat = *paramBureaucrat; // <----- deep copy

    std::cout << *higherBureaucrat << std::endl;
    std::cout << *paramBureaucrat << std::endl;

    --(*higherBureaucrat);
    std::cout << *higherBureaucrat << std::endl;
    --(*higherBureaucrat);
    std::cout << *higherBureaucrat << std::endl;

    std::cout << *paramBureaucrat << std::endl;

    // delete defaultBureaucrat;
    delete paramBureaucrat;
    delete copyBureaucrat;

    return (0);
}