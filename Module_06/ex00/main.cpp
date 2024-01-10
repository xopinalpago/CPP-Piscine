/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:29 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/10 10:24:23 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string nb = argv[1];
		ScalarConverter::convert(nb);
	}
	return (0);
}

// int main()
// {
// 	std::string cyanCode = "\033[1;36m";
// 	std::string resetCode = "\033[0m";
// 	std::cout << cyanCode << "********45********" << resetCode << std::endl;
// 	ScalarConverter::convert("45");
// 	std::cout << cyanCode << "********42.0f********" << resetCode << std::endl;
// 	ScalarConverter::convert("42.0f");
// 	std::cout << cyanCode << "********c********" << resetCode << std::endl;
// 	ScalarConverter::convert("c");
// 	std::cout << cyanCode << "********++1********" << resetCode << std::endl;
// 	ScalarConverter::convert("++1");
// 	std::cout << cyanCode << "********+-1********" << resetCode << std::endl;
// 	ScalarConverter::convert("+-1");
// 	std::cout << cyanCode << "********1a********" << resetCode << std::endl;
// 	ScalarConverter::convert("1a");
// 	std::cout << cyanCode << "********d1********" << resetCode << std::endl;
// 	ScalarConverter::convert("d1");
// 	std::cout << cyanCode << "********dd********" << resetCode << std::endl;
// 	ScalarConverter::convert("dd");
// 	std::cout << cyanCode << "********5s6dfdf5********" << resetCode << std::endl;
// 	ScalarConverter::convert("5s6dfdf5");
// 	std::cout << cyanCode << "********0.f********" << resetCode << std::endl;
// 	ScalarConverter::convert("0.f");
// 	std::cout << cyanCode << "********0.0f********" << resetCode << std::endl;
// 	ScalarConverter::convert("0.0f");
// 	std::cout << cyanCode << "********0.0********" << resetCode << std::endl;
// 	ScalarConverter::convert("0.0");
// 	std::cout << cyanCode << "********.f********" << resetCode << std::endl;
// 	ScalarConverter::convert(".f");
// 	std::cout << cyanCode << "********.0f********" << resetCode << std::endl;
// 	ScalarConverter::convert(".0f");
// 	std::cout << cyanCode << "********0********" << resetCode << std::endl;
// 	ScalarConverter::convert("0");
// 	std::cout << cyanCode << "********+0********" << resetCode << std::endl;
// 	ScalarConverter::convert("+0");
// 	std::cout << cyanCode << "********-0********" << resetCode << std::endl;
// 	ScalarConverter::convert("-0");
// 	std::cout << cyanCode << "********2147483647********" << resetCode << std::endl;
// 	ScalarConverter::convert("2147483647");
// 	std::cout << cyanCode << "********2147483648********" << resetCode << std::endl;
// 	ScalarConverter::convert("2147483648");
// 	std::cout << "********-2147483648********" << resetCode << std::endl;
// 	ScalarConverter::convert("-2147483648");
// 	std::cout << cyanCode << "********2147483648.0********" << resetCode << std::endl;
// 	ScalarConverter::convert("2147483648.0");
// 	std::cout << cyanCode << "********-2147483649.011********" << resetCode << std::endl;
// 	ScalarConverter::convert("-2147483649.011");
// 	std::cout << cyanCode << "********100.88********" << resetCode << std::endl;
// 	ScalarConverter::convert("100.88");
// 	std::cout << cyanCode << "********-6542.154f********" << resetCode << std::endl;
// 	ScalarConverter::convert("-6542.154f");
// 	std::cout << cyanCode << "********-inff********" << resetCode << std::endl;
// 	ScalarConverter::convert("-inff");
// 	std::cout << cyanCode << "********+inff********" << resetCode << std::endl;
// 	ScalarConverter::convert("+inff");
// 	std::cout << cyanCode << "********nanf********" << resetCode << std::endl;
// 	ScalarConverter::convert("nanf");
// 	std::cout << cyanCode << "********-inf********" << resetCode << std::endl;
// 	ScalarConverter::convert("-inf");
// 	std::cout << cyanCode << "********+inf********" << resetCode << std::endl;
// 	ScalarConverter::convert("+inf");
// 	std::cout << cyanCode << "********nan********" << resetCode << std::endl;
// 	ScalarConverter::convert("nan");
// 	return (0);
// }
