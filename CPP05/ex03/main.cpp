/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 20:52:23 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        std::cout << "===========TEST OVERLOAD OSTREAM=========== " << std::endl;
        
        // Bureaucrat    *defaultBureaucrat = new Bureaucrat();
        Bureaucrat    *paramBureaucrat = new Bureaucrat("John", 3);
        Bureaucrat    *copyBureaucrat = new Bureaucrat(*paramBureaucrat);
        Bureaucrat	*higherBureaucrat = new Bureaucrat("Patrick", 148);
        
        std::cout << *paramBureaucrat << std::endl;
        std::cout << *copyBureaucrat << std::endl;
        std::cout << *higherBureaucrat << std::endl;

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
    }
    {
        try
        {
            Bureaucrat Bob("Bob", 45);
            std::cout << Bob << std::endl;
            
            // AForm AForm1("AForm1", 50, 30);
            // std::cout << AForm1 << std::endl;
            // Bob.signAForm(AForm1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            // AForm AForm2("AForm2", 50, 50);
            // Anni.signAForm(AForm2);
            // std::cout << AForm2 << std::endl;
            
            Bureaucrat Anni("Anni", 2);

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
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}