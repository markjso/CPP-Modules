/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:27:48 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/07 17:11:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream infile(filename);
	if (infile.fail()) {
		std::cout << "Couldn't open the file!" << std::endl;
		return 0;
}
	std::ofstream outfile(filename + ".replace");
	std::string line;
	while (std::getline(infile, line)) {
		if (line == s1) {
			outfile << s2 << std::endl;
		}
		else {
			outfile << line <<std::endl;
		}
	}
	infile.close();
	outfile.close();
}

