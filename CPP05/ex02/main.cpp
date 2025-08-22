/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:29:07 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AForm.hpp"
#include "include/Bureaucrat.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat *lily = new Bureaucrat ("lily", 5);
    Bureaucrat *copy = new Bureaucrat (*lily);
    Bureaucrat *Jhon = new Bureaucrat ("Jhon", 149);
    Bureaucrat *Nina = new Bureaucrat ("Nina", 2);
    
    std::cout << *lily << std::endl;
    std::cout << *copy << std::endl;
    std::cout << *Jhon << std::endl;
    std::cout << *Nina;
    std::cout << "=========================================" << std::endl;
    try
    {
        (*lily)--;
        std::cout << *lily << std::endl;
        (*copy)++;
        std::cout << *copy << std::endl;
        (*Jhon)++;
        std::cout << *Jhon << std::endl;
        (*Nina)--;
        std::cout << *Nina << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete(lily);
    delete(Jhon);
    delete(Nina);
    return (0);
}