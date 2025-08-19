/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:18 by imatek            #+#    #+#             */
/*   Updated: 2025/08/19 19:28:32 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *param = new Bureaucrat ("lily", 5);
    Bureaucrat *copy = new Bureaucrat (*param);
    Bureaucrat *higher = new Bureaucrat ("Jhon", 150);
    Bureaucrat *lower = new Bureaucrat ("Nina", 2);

    std::cout << *param << std::endl;
    std::cout << *copy << std::endl;
    std::cout << *higher << std::endl;
    std::cout << *lower;
    std::cout << "=========================================" << std::endl;
    try
    {
        (*param)--;
        std::cout << *param << std::endl;
        (*copy)++;
        std::cout << *copy << std::endl;
        (*higher)++;
        std::cout << *higher << std::endl;
        (*lower)--;
        std::cout << *lower<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete(param);
    delete(higher);
    delete(lower);
    return (0);
}