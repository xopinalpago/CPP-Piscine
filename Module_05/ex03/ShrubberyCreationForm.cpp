/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:17:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/12/18 14:10:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(), _target("")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform) : AForm(shrubberycreationform.getName(), shrubberycreationform.getSignIt(), shrubberycreationform.getExecIt())
{
	this->_target = shrubberycreationform._target;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubberycreationform)
{	
	if (this == &shrubberycreationform)
		return (*this);
	AForm::operator=(shrubberycreationform);
	this->_target = shrubberycreationform._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;	
}

void ShrubberyCreationForm::do_execution(void) const
{
	std::ofstream ofs((this->_target + "_shrubbery").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error opening outfile." << std::endl;
		return ;
	}
	ofs << "\
                                                         .\n\
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%;\n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  ,'\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;.\n\
                          ...;%@@@@@%%:;;;;,..\n\
	";
	return ;
}