/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/07/26 19:07:24 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
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
        
            std::cout << "===========TEST DEEP COPY=========== " << std::endl;
            
            *higherBureaucrat = *paramBureaucrat; // <----- deep copy

            std::cout << *higherBureaucrat << std::endl;
            std::cout << *paramBureaucrat << std::endl;

            (*higherBureaucrat)--;
            std::cout << *higherBureaucrat << std::endl;
            (*higherBureaucrat)--;
            std::cout << *higherBureaucrat << std::endl;

            std::cout << *paramBureaucrat << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
        delete(paramBureaucrat);
        delete(copyBureaucrat);
        delete(higherBureaucrat);
        // delete defaultBureaucrat;
    }
    {
        try
        {
            Bureaucrat Bob("Bob", 45);
            Form form1("form1", 50, 30);

            std::cout << Bob << std::endl;
            std::cout << form1 << std::endl;
            Bob.signForm(form1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat Anni("Anni", 2);
            Form form2("form2", 50, 50);

            Anni.signForm(form2);
            std::cout << form2 << std::endl;

            std::cout << "Before operator++ : " << Anni << std::endl;
            Anni++;
            Anni++;
            Anni++;
            std::cout << "After operator++ : " << Anni << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat Pino("Pino", 70);
            Form form3("form3", 50, 50);

            std::cout << Pino << std::endl;
            std::cout << form3 << std::endl;
            Pino.signForm(form3);

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}