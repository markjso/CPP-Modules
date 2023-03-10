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
	std::string filename = av[1];				// name of the file (test)
	std::string s1 = av[2];					// s1 that line will look for
	std::string s2 = av[3];					// s2 string that will replace s1
	std::ifstream infile(filename);				// ifstream attempts to open the file at av[1]
	if (infile.fail()) {
		std::cout << "Couldn't open the file!" << std::endl;
		return 0;
}
	std::ofstream outfile(filename + ".replace");		// ofstream creates an outfile and appends .replace to it
	std::string line;					// line is used to do the compare for s1 and s2
	while (std::getline(infile, line)) {
		if (line == s1) {
			outfile << s2 << std::endl;		// replacing every instance of s1 with s2
		}
		else {
			outfile << line <<std::endl;		// else just output the string that is there
		}
	}
	infile.close();
	outfile.close();
}

